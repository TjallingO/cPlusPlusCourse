// Programming in C/C++
// Week 2: Assignment 19
// Tjalling Otter &  Emiel Krol

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  if (argc != 3)
  {
    cout << "This program expects two command-line arguments. Exiting. \n";
    return(0);
  }

  size_t base = stoul(argv[1];            // First argument, radix
  size_t inputValue = stoul(argv[2]);	    // Second argument, number to convert
  size_t intermediaryValue = inputValue;	// Initialise intermediary value
  string outputValue;						          // Initialise output string

  if (inputValue == 0)  // Quick exit for when 0 will stay 0 in any base
  {
    outputValue = "0";
  }

  while (intermediaryValue != 0)  // Continuous loop while initial put is decremented
  {
    size_t prependValue;  // Initialising the digit to prepend to the string

    prependValue = (intermediaryValue % base);  			       // Finding out the remainder

    if (prependValue > 9) 									                 // If remainder > 9, ...
    {
      outputValue.insert(0, 1, (char) (prependValue += 87)); // ... it must be an
															                               // alphabetical character
    }
    else  													                         // If not, ...
    {
      outputValue.insert(0, 1, (char) (prependValue += 48)); // .. it is just a number
    }
    intermediaryValue /= base;  // Decrementing the value to move to the next digit
  }
  cout << inputValue << ", displayed using raxix " << base << " is: " //Output
       << outputValue << '\n';
}
