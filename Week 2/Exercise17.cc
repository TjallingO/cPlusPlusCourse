// Programming in C/C++
// Week 1: Assignment 17
// Tjalling Otter &  Emiel Krol

#include <iostream>
#include <string>
#include <bitset>
#include <cmath>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]) {

  string input = argv[1];                // the first argument is the binary number supplied

  size_t value = stoi(input,nullptr,2);  //Turning the string into an integer so we can calculate with it.
                                         //Where the 2 indicates that the string is a binary number.
  size_t newValue;

  size_t digits = input.length();        //Number of digits in the supplied binary number

  size_t caseint;                        //For checking if argv[2] is rol or ror

  string stringrorofrol = argv[2];       //Saving argv[2] in a string to test whether it is rol or ror

  if(stringrorofrol=="ror")              //Checking whether argv[2] is ror
    caseint=0;

  if(stringrorofrol=="rol")              //Checking whether argv[2] is rol
    caseint=1;



  switch (caseint) {
    case 0:                       //if ror
      if(((value>>1)<<1)==value)  //if even
      {
        //example 1000 -> 0100 ror
        newValue = (value>>1);
        break;
      }
      if(((value>>1)<<1)!=value) //if uneven
      {
        //example 1001 -> 1100 ror
        newValue = (value>>1)+pow(2,digits-1);
        break;
      }
    case 1:               //if rol
      if((value-pow(2,digits-1))>= 0) //if most significant digit 1
      {
        // example 1000 -> 0001 rol
        newValue = (value<<1)+1-pow(2,digits);
        break;
      }
      else //if most significant digit 0
      {
        // example 0101 -> 1010 rol
        newValue = (value<<1);
        break;
      }
    break;
    }

  string newBit;
  size_t bitV = newValue;

  for (digits; 0 < digits; digits--) {
    if(bitV-pow(2,digits-1)<0)
    {
      newBit.append("0");
    }
    if(bitV-pow(2,digits-1)>=0)
    {
      newBit.append("1");
      bitV = bitV - pow(2,digits-1);
    }
  }

  //Printing the value in binary - decimal and hexadecimal
  cout << newBit << ' ' << newValue << ' ' << hex << newValue << '\n';
}
