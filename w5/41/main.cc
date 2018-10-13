// Programming in C/C++
// Week 5: Assignment 41
// Tjalling Otter & Emiel Krol
// Main file

#include "main.ih"

int main(int argc, char const *argv[])
{
  extern char **environ;

  for (size_t index = 0; index != argc; ++index)  // For elements of argv (0-argc)
    cout << environ[index] << '\n';               // print associated env var

  for (size_t index = 0; environ[index] != nullptr; ++index)  // For all elements
    cout << argv[index] << '\n';                              // of environ[] print
}                                                             // associated argv
