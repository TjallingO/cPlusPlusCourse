#ifndef INCLUDED_MAXFOUR_
#define INCLUDED_MAXFOUR_

#include <cstddef>
#include <string>

class MaxFour
{
  public:
    MaxFour();
    ~MaxFour();

  private:
    inline size_t static objCount = 0;
    std::string *d_content;
};

#endif
