// Programming in C/C++
// Week 1: Assignment 17
// Tjalling Otter &  Emiel Krol

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {

  string input = argv[1];                // the first argument is the binary number supplied

  size_t value = stoul(input, nullptr,2);  //Turning the string into an integer so we can calculate with it.
                                         //Where the 2 indicates that the string is a binary number.
  size_t newValue;

  size_t digits = input.length();        //Number of digits in the supplied binary number

  size_t caseint = (argv[2] == "ror" ? 0 : 1);

  switch (caseint) {
    case 0:                                 //if ror is entered
      if (((value >> 1) << 1 ) == value )   //if it is even since then the first
      {                                     //digit in the new value must be 0
        newValue = (value >> 1);            //example 1000 -> 0100 ror
        break;
      }
      if (((value >> 1) << 1) != value)     //if uneven, then first digit in the
      {                                     //new value must be 1
        newValue = (value >> 1) + pow(2, digits-1);  //example 1001 -> 1100 ror
        break;
      }
    case 1:                                     //if rol is entered
      if ((value - pow(2, digits - 1)) >= 0)    //if most significant digit 1, since
      {                                         //then the last value in the new values
                                                //must be 1
        newValue = (value << 1) + 1 - pow(2, digits);  // example 1000 -> 0001 rol
        break;
      }
      else                          //if most significant digit 0, since then the
      {                             //last value in the new value must be 0
        newValue = (value << 1);    // example 0101 -> 1010 rol
        break;
      }
    break;
    }

  string newBit;                 //new string to store our new bit value
  size_t bitV = newValue;        //variable that we can alter to find the binary number

  for (digits; 0 < digits; --digits) { //Checking if most significant bit should
    if(bitV-pow(2, digits-1) < 0)      //be a 1 or a 0. And adding it to the string.
    {                                  //then the same for the most significant bit
      newBit.append("0");              //after that...until there are no more bits.
    }
    if(bitV-pow(2, digits-1) >= 0)
    {
      newBit.append("1");
      bitV -=  pow(2, digits - 1);
    }
  }

  //Printing the value in binary - decimal and hexadecimal
  cout << newBit << ' ' << newValue << ' ' << hex << newValue << '\n';
}
