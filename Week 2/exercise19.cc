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

  size_t inputValue = stoul(argv[2]);
  size_t intermediaryValue = inputValue;
  size_t base = stoul(argv[1]);
  string outputValue;

  if (inputValue == 0)
  {
    outputValue = "0";
  }

  while (intermediaryValue != 0)
  {
    size_t prependValue;

    prependValue = (intermediaryValue % base);

    if (prependValue > 9)
    {
      outputValue.insert(0, 1, (char) (prependValue += 87));
    }
    else
    {
      outputValue.insert(0, 1, prependValue);
    }

    intermediaryValue /= base;
  }
  cout << inputValue << ", displayed using raxix " << base << " is: " << outputValue << '\n';
}
