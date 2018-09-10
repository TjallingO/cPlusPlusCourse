#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int value;

  count << "Enter a value\n";
  cin >> value;                            // Asking for input

  int i=0;                                 // Defining i for the while loop

  while (value > pow(2,i)){                // Going through all the powers of 2
    i++;
    }
  //cout << value << " - " << pow(2,i) << " = " << value-pow(2,i) << '\n'; //Checking if correct
  cout << "The value " << value << (value - pow(2,i)== 0 ? "" :" not") <<" an exact power of two\n";
}
