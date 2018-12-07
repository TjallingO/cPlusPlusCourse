#ifndef INCLUDED_EXTSTRING_
#define INCLUDED_EXTSTRING_

#include <string>

class extString: public std::string
{
    public:
      extString(size_t count, std::string const &str);  // New fill constructor

    private:
};

#endif
