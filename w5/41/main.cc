// Main file

#include "main.ih"

int main(int argc, char *argv[])
{
  size_t distanceEnvArgv = *environ - *argv;  // Determine distance env and environ

  *argv += distanceEnvArgv;     // Move argv to position environ
  *environ -= distanceEnvArgv;  // Move environ to position argv

  for (size_t index = 0; argv[index] != 0; ++index) // Loop through "argv"
    cout << argv[index] << '\n';                    // And print elements

  for (size_t index = 0; environ[index] != 0; ++index)  // Loop through "environ"
    cout << environ[index] << '\n';                     // And print elements
}
