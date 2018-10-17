#include "strings.ih"

Strings::Strings(std::istream &input)
{
  std::cout << "istream constructor called. \n"
            << "Enter an empty line (enter/return) to hault input. \n";

  std::string newEntry; // Define string newEntry
  while (getline(input, newEntry))  // Loop while getline works, setting
  {                                 // newEntry to the new line
    if (newEntry.empty()) // If getline creates an empty string
      break;  // Break out of the whie loop (happens when enter/return is pressed)

    add(newEntry.c_str());  // Call the add using the newly entered string.
    // Note that the string is converted to a NTBS to work with the add
    // function. Alternatively another add function could be written.
  }
}
