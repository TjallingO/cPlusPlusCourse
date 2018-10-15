#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <cstddef>
#include <string>

class Strings
{
  size_t d_size;
  std::string d_str[2];

  public:
    Strings(size_t numStrings, char **strings);
    Strings(char **strings);
    void add(char *novelString, std::string *currentStrings);
    void printStrings();

  private:
};

#endif
