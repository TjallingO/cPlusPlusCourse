#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <cstddef>
#include <string>

class Strings
{
  size_t d_size = 0;
  std::string *d_str = 0;
  size_t d_cap = 10;

  public:
    Strings(size_t numStrings, char **strings);
    Strings(char **strings);
    Strings(std::istream &input);
    Strings();
    
    void add(char *novelString);
    void add(std::string &novelString);
    void printStrings();
    void destroy();

  private:
};

#endif
