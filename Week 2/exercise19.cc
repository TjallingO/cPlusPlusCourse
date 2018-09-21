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
    return 0;
  }

  size_t base = stoul(argv[1]);           // First argument, radix
  size_t inputValue = stoul(argv[2]);	    // Second argument, number to convert
  size_t intermediaryValue = inputValue;  // Initialise intermediary value
  string outputValue;					            // Initialise output string

  size_t const startAlphabetical = 87;    // Start of alphabeticals in ascii set
  size_t const startNumerical = 48;       // Start of numericals in ascii set

  do  // Continuous loop while initial put is decremented
  {
    size_t prependValue = intermediaryValue % base;
    // Finding out the remainder of a division to prepend to the string

    if (prependValue > 9)
      outputValue.insert(0, 1, prependValue += startAlphabetical);
    // If remainder > 9, it must be an alphabetical character, thus return
    // the corresponding one from the ascii set.

    else
      outputValue.insert(0, 1, prependValue += startNumerical);
    // If not, it is just a number, and it is returned from the ascii set.

    intermediaryValue /= base;  // Decrementing the value to move to the next digit
  }
  while (intermediaryValue != 0);
  // A do-while is used here to handle the case wherein the inputValue == 0, as
  // otherwise the loop will not even run once, and outputValue remains empty.

  cout << inputValue << ", displayed using raxix " << base << " is: " //Output
       << outputValue << '\n';
}
