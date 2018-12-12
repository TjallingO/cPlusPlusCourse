#ifndef INCLUDED_EXTSTRING_
#define INCLUDED_EXTSTRING_

#include <string>

class ExtString: public std::string
{
    public:
      ExtString(size_t count, std::string const &str);  // New fill constructor

    private:
};

#endif
