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

        Strings(char **environLike);

        ~Strings();

        size_t size() const;

        void add(std::string const &next);          // add another element

        std::string &operator[](size_t idx);      //index operators
        std::string const &operator[](size_t idx) const;

    private:

        std::string **storageArea();                // to store the next str.
        void destroy();
        std::string **enlarged();                   // to d_capacity
        static std::string **rawPointers(size_t nPointers);

        std::string &element(size_t idx) const;
};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}



#endif
