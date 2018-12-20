#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <string>     // Actually need string here instead of iosfwd
#include <vector>     // Strings container
#include <stdexcept>  // For throwing out of range exception
#include <iostream>   // Just for testing

class Strings
{
  std::vector<std::string> d_vStrings;  // New container for strings

  public:
    Strings() = default;              // No need for another constructor
    ~Strings() = default;             // or destructor

    Strings(int argc, char *argv[]);  // Argc/argv constructor
    Strings(char **environLike);      // Environ constructor

    size_t size() const;
    size_t capacity() const;
    std::string const &at(size_t idx) const;  // Only const at

    void add(std::string const &next);        // Adding
    // Not private since it can be used by user as well

    void resize(size_t newSize);
    void reserve(size_t newCapacity);

    void operator+=(std::string const &next);         // Operators
    std::string const &operator[](size_t idx) const;

    void print() const;                         // Just for testing
};

inline size_t Strings::size() const
{
  return d_vStrings.size();
}

inline size_t Strings::capacity() const
{
  return d_vStrings.capacity();
}

inline void Strings::resize(size_t newSize)
{
  d_vStrings.resize(newSize);
}

inline void Strings::reserve(size_t newCapacity)
{
  d_vStrings.reserve(newCapacity);
}

inline void Strings::operator+=(std::string const &next)
{
  add(next);
}

inline std::string const &Strings::operator[](size_t idx) const
{
  return at(idx);
}

inline void Strings::print() const          // Testing
{
  for (auto idx = d_vStrings.begin(); idx != d_vStrings.end(); ++idx)
    std::cout << *idx << '\n';
}

#endif
