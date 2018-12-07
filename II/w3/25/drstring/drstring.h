#ifndef INCLUDED_DRSTRING_
#define INCLUDED_DRSTRING_

#include <string>

class drstring : public std::string
{
    std::string *d_str = 0;

  public:
    drstring();
    drstring(std::string const &input, int count);

    std::string get_string();


};

#endif
