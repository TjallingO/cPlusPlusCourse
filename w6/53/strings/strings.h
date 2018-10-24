#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
  size_t d_capacity = 1;
  size_t d_size = 0;
  std::string **d_pPstrings = 0;

  public:
    struct POD
    {
      size_t      size;
      std::string **str;
    };

    Strings();
    Strings(size_t argc, char const *argv[]);
    Strings(char *environLike[]);           // Not const because of testing script
    Strings(std::istream &in);
    ~Strings();

    void swap(Strings &other);

    size_t size() const;
    size_t capacity() const;                    // New addition
    std::string* const *data() const;
    POD release();
    POD d_POD();

    std::string const &at(size_t idx) const;    // for const-objects
    std::string &at(size_t idx);                // for non-const objects

    void add(std::string const &next);          // add another element

  private:
    void fill(char *ntbs[]);                    // fill prepared d_pPstrings
    void resize(size_t newSize);                // New addition
    std::string** rawPointers(size_t nNewPointers); // New addition
    void reserve(size_t newCapacity);           // New addition

    std::string &safeAt(size_t idx) const;      // private backdoor
    std::string *enlarge();
    void destroy();
};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
  return d_size;
}

inline size_t Strings::capacity() const
{
  return d_capacity;
}

inline std::string const &Strings::at(size_t idx) const
{
  return safeAt(idx);
}

inline std::string &Strings::at(size_t idx)
{
  return safeAt(idx);
}

#endif
