// Programming in C/C++
// Week 1: Assignment 17
// Tjalling Otter &  Emiel Krol

#include <iostream>
#include <string>

using namespace std;

enum commandOptions
{
  ror, rol
};

int main(int argc, char const *argv[]) {

  string input = argv[1];                // the first argument is the binary number supplied

  size_t value = stoul(input, nullptr,2);  //Turning the string into an integer so we can calculate with it.
                                         //Where the 2 indicates that the string is a binary number.
  size_t newValue;

  size_t digits = input.length();        //Number of digits in the supplied binary number

  commandOptions enumCommand;

  string command = argv[2];   //The second argument is the rotate command.

  if(command == "ror")    //finding what command to use in the case list below
    enumCommand = ror;
  if (command == "rol")
    enumCommand = rol;
  if (command != "ror" && command != "rol")
    {
      cout << "Please enter rol or ror after the binary number\n";
      return 0;     //ending the program
    }

  size_t power = 1;
  size_t powerminusone = 1;

  for (size_t count = 0; count < digits; ++count) //2 to the power of nr of digits
    power = power * 2;
  for (size_t count = 0; count < digits-1; ++count)
    powerminusone = powerminusone * 2; //2 to the power of nr of digits - 1

  switch (enumCommand) {
    case ror:
      if (((value >> 1) << 1 ) == value )   //if it is even since then the first
      {                                     //digit in the new value must be 0
        newValue = (value >> 1);            //example 1000 -> 0100 ror
        break;
      }
      if (((value >> 1) << 1) != value)     //if uneven, then first digit in the
      {                                     //new value must be 1
        newValue = (value >> 1) + powerminusone;  //example 1001 -> 1100 ror
        break;
      }
    case rol:
      if ((value - powerminusone) >= 0)    //if most significant digit 1, since
      {                                    //then the last value in the new values
                                           //must be 1
        newValue = (value << 1) + 1 - power;  // example 1000 -> 0001 rol
        break;
      }
      else                          //if most significant digit 0, since then the
      {                             //last value in the new value must be 0
        newValue = (value << 1);    // example 0101 -> 1010 rol
        break;
      }
    break;
    }

  size_t bitV = newValue;        //variable that we can alter to find the binary number

  for (size_t count = digits; count > 0; --count) { //Printing the value in binary
    if (bitV >= powerminusone)                      //by printing 1 or 0 one at a time
      {                                             //starting at the most significant
        cout << 1;                                  //digit. If the value to be
        bitV = bitV - powerminusone;                //converted is larger than the
      }                                             //value of the most significant bit
    else                                            //a 1 is printed, otherwise a 0.
        cout << 0;                                  //if a 1 is printed the new value
                                                    //is the old value minus the most
      powerminusone = powerminusone/2;              //significant bit. Then we do the
    }                                               //with one bit to the right ect.
  //Printing the value in decimal and hexadecimal
  cout << ' ' << newValue << ' ' << hex << newValue << '\n';
}
