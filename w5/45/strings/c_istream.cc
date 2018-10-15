#include "strings.ih"

Strings::Strings(std::istream &input)
{
  std::cout << "istream constructor called. \n"

  std::string newEntry;
  while (getline(input, newEntry))
  {
    if (newEntry.empty())
      break;
    add(newEntry);
  }
}
