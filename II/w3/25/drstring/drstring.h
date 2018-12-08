#ifndef INCLUDED_DRSTRING_
#define INCLUDED_DRSTRING_

#include <string>

class drstring : public std::string
{
    //std::string *d_str = 0;

  public:
    //drstring();
    //drstring(std::string const &input, size_t count);

    void* operator new(size_t count, std::string const &input);

    //std::string *get_string();


};

#endif
