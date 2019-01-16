#ifndef INCLUDED_LINE_
#define INCLUDED_LINE_

#include <istream>

class Line : public std::string
{
    friend std::istream &operator>>(std::istream &is, Line &line);
};

#endif
