#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
  size_t d_size;
  size_t d_capacity = 1;
  std::string **d_str;

  public:
    struct POD
    {
      size_t      size;
      std::string *str;
    };

    Strings();
    Strings(int argc, char *argv[]);
    Strings(char *environLike[]);
    Strings(std::istream &in);

    ~Strings();

    void swap(Strings &other);

    size_t size() const;
    size_t capacity() const;
    std::string* const *data() const;
    POD release();
    POD d_POD();

    std::string const &at(size_t idx) const;    // for const-objects
    std::string &at(size_t idx);                // for non-const objects

    void add(std::string const &next);          // add another element

  private:
    void fill(char *ntbs[]);                    // fill prepared d_str
    void resize(size_t newLength);
    std::string* rawPointers(size_t nNewPointers);
    void reserve();

    std::string &safeAt(size_t idx) const;      // private backdoor
    std::string *enlarge();
    void destroy();

    static size_t count(char *environLike[]);   // # elements in env.like
};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
  return d_size;
}

inline size_t Strings::capacity() const
{
  return d_capacity;
}

// inline std::string* const **Strings::data() const
// {
//   return d_str;
// }

inline std::string const &Strings::at(size_t idx) const
{
  return safeAt(idx);
}

inline std::string &Strings::at(size_t idx)
{
  return safeAt(idx);
}

#endif
