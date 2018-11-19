// Programming in C/C++
// Week 3: Assignment 20
// Tjalling Otter &  Emiel Krol
// Main function

#include "main.ih"

#include <string>
#include <vector>

int main(int argc, char *argv[])
{
  bool isDouble;
  for (size_t index = 1; index != argc; index++)
  {
    string tempString = argv[index];
    if (tempString.find('.') != string::npos)
    {
      isDouble = 1;
      cout << isDouble;
      break;
    }
  }
}
