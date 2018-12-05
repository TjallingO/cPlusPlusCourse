#ifndef INCLUDED_MAXFOUR_
#define INCLUDED_MAXFOUR_

#include <cstddef>
#include <string>
#include <iostream>

class MaxFour
{
  private:
    inline size_t static s_objCount = 0;
    std::string *d_content;               // Example to allow for memory allocation

  public:
    MaxFour();
    ~MaxFour();
};

#endif
