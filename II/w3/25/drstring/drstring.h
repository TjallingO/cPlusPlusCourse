#ifndef INCLUDED_DRSTRING_
#define INCLUDED_DRSTRING_

#include <string>

class drstring
{
    std::string d_str = 0;

  public:
    drstring();
    drstring(std::string const &input);

    std::string get_string();


};

#endif
