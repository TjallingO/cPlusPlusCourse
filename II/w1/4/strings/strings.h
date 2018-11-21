#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
    size_t d_size = 0;
    size_t d_capacity = 1;
    std::string **d_str;            // now a double *

    public:
        Strings();

        Strings(int argc, char *argv[]);
        Strings(char **environLike);

        ~Strings();

        size_t size() const;
        size_t capacity() const;
        std::string const &at(size_t idx) const;    // for const-objects
        std::string &at(size_t idx);                // for non-const objects

        void add(std::string const &next);          // add another element

        void resize(size_t newSize);
        void reserve(size_t newCapacity);

        void swap(Strings &other);

        namespace std
        {
      //  std::istream &operator>>(std::istream &out);
        ostream &operator<<(ostream &lvalue,
                            string const &rvalue);
        };

    private:
        std::string &safeAt(size_t idx) const;      // private backdoor
        std::string **storageArea();                // to store the next str.
        void destroy();
        std::string **enlarged();                   // to d_capacity
        static std::string **rawPointers(size_t nPointers);


        std::istream &extractFrom(std::istream &in);//performing the extraction
        std::ostream &insertInto(std::ostream &out);//performing the insertion
};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}

inline size_t Strings::capacity() const     // potentially dangerous practice:
{                                           // inline accessors
    return d_capacity;
}

inline std::string const &Strings::at(size_t idx) const
{
    return safeAt(idx);
}

namespace std
{
  inline std::string &Strings::at(size_t idx)
  {
      return safeAt(idx);
  }
};
/*
inline std::istream &Strings::operator>>(std::istream &in)
{
  return extractFrom(in);
}
*/
inline std::ostream &operator<<(std::ostream &lvalue,
                                std::string const &rvalue)
{
  return rvalue.insertInto(lvalue);
}


#endif
