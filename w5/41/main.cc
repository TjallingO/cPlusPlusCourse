// Iterating over environ and argv: main file

#include "main.ih"

int main(int argc, char const *argv[])
{
  extern char **environ;

  for (size_t index = 0; index != argc; ++index)  // For elements of argv (0-argc)
    cout << environ[index] << '\n';               // print associated env var

  for (size_t index = 0; environ[index] != nullptr; ++index)  // For all elements
    cout << argv[index] << '\n';                              // of environ[] print
}                                                             // associated argv
