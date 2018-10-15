// Main file

#include "main.ih"

int main()
{
  extern char **environ;
  char* mystrings[8]={"string1", "string2","string3","string4","string5","string6", 0};
  Strings hello = Strings(std::cin);
  hello.printStrings();
}
