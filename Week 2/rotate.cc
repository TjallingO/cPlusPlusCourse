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

  size_t digits = input.length();        //Number of digits in the supplied binary number

  size_t caseint;                        //For checking if argv[2] is rol or ror

  string stringRorOrRol = argv[2];       //Saving argv[2] in a string to test whether it is rol or ror

  if(stringRorOrRol=="ror")              //Checking whether argv[2] is ror
  {
    caseint=0;
  }
  if(stringRorOrRol=="rol")              //Checking whether argv[2] is rol
  {
    caseint=1;
  }

  switch (caseint) {
    case 0:                       //so if ror
      if(((value>>1)<<1)==value)  //if even
      {
        //  1000 -> 0100 ror
        input.pop_back();
        input.insert(0,"0");
        break;
      }
      if(((value>>1)<<1)!=value) //if uneven
      {
        //1001 -> 1100 ror
        input.pop_back();
        input.insert(0,"1");
        break;
      }
    case 1:                       //so if rol
      if((input[0])=='1')         //if most significant digit 1
      {
        // 1000 -> 0001 lol
        input.erase(0,1);
        input.append("1");
        break;
      }
      if((input[0])=='0')         //if most significant digit 0
      {
        // 0101 -> 1010 lol
        input.erase(0,1);
        input.append("0");
        break;
      }
    break;
    }

  size_t newValue = stoi(input,nullptr,2);  //Turning the value into a string, the 2 indicating that the string is binary

  stringstream hexStream;
  hexStream << hex << newValue;                 //Getting the hexadecimal form.
  string hexString (hexStream.str() );          //Turning it into a string

  cout << input << ' ' << newValue << ' ' << hexString << '\n'; //Printing the value in binary - decimal and hexadecimal

}
