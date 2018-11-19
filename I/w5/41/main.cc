// Main file

#include "main.ih"

int main(int argc, char **argv)
{
  char **temporary = argv;  // Create a new pointer to the memory that argv points to
  argv = environ;           // Point argv to the memory that environ points to
  environ = temporary;      // Point environ to where temporary points
                            // (previously where argv was pointing)

  for (size_t index = 0; argv[index] != 0; ++index) // Loop through "argv"
    cout << argv[index] << '\n';                    // And print elements

  for (size_t index = 0; environ[index] != 0; ++index)  // Loop through "environ"
    cout << environ[index] << '\n';                     // And print elements
}
