#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <cstddef>
#include <string>
// #include <ioforward>

class Strings
{
  size_t d_size = 0;      // Number of elements in d_str
  std::string *d_str = 0; // Stored strings

  public:
    Strings(size_t numStrings, char const **strings); // argc, argv constructor
    Strings(char const **strings);                    // environ constructor
    Strings(std::istream &input);                     // istream constructor
    Strings();                                        // default constructor

    void printStrings() const;                        // Just for testing

    // 46
    size_t size() const;
    // std::string* data(); // Not implemented
    // std::string* at(size_t index, bool) const; // Not implemented
    // std::string* at(size_t index); // Not implemented

    // 47
    static void stringsSwap(Strings &objectA, Strings &objectB);

  private:
    void add(char const *novelString);          // Add char array to d_str
};

#endif
