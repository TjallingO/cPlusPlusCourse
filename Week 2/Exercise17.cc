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

  if(stringrorofrol=="ror")              //Checking whether
  {
    caseint=0;
  }
  if(stringrorofrol=="rol")
  {
    caseint=1;
  }

  string newInput = input;

  switch (caseint) {
    case 0:
      if(((value>>1)<<1)==value)  //if even
      {
        //  1000 -> 0100 ror
        newValue = (value>>1);
        newInput.pop_back();      //int way
        newInput.insert(0,"0");   //string way
        break;
      }
      if(((value>>1)<<1)!=value) //if uneven
      {
        //1001 -> 1100 ror
        newValue = ((value>>1)+pow(2,digits-1));
        newInput.pop_back();
        newInput.insert(0,"1");
        break;
      }
    case 1:
      if((input[0])=='1') //if most significant digit 1
      {
        // 1000 -> 0001 lol
        newValue = ((value<<1)+1-pow(2,digits));
        newInput.erase(0,1);
        newInput.append("1");
        break;
      }
      if((input[0])=='0') //if most significant digit 0
      {
        // 0101 -> 1010 lol
        newValue = (value<<1);
        newInput.erase(0,1);
        newInput.append("0");
        break;
      }
    break;
    }

  stringstream hexS;
  hexS << hex << newValue;      //Getting the hexadecimal form.
  string hexV (hexS.str() );    //Turning it into a string

  size_t testvalue = stoi(newInput,nullptr,2);

  cout << newInput << ' ' << newValue << ' ' << hexV << '\n'; //Printing the value in binary - decimal and hexadecimal
  cout << testvalue << '\n';
}
