// Programming in C/C++
// Week 3: Assignment 20
// Tjalling Otter &  Emiel Krol
// Main function

#include "main.ih"

int main(int argc, const char *argv[])
{
  size_t length = argc; // Number of arguments from argc
  bool doubleInput = isDouble(argv, length);  // Determine if inputs are doubles

  auto summedValue = (doubleInput ? sum(argv, length) : sum(argv, length, doubleInput));
  cout << summedValue << "\n";
  // If input are doubles, call the function to sum doubles. Otherwise, call
  // the one for integers. The return thereof is assigned to summedValue,
  // and then printed.
}
