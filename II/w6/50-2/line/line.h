#ifndef INCLUDED_LINE_
#define INCLUDED_LINE_


class Line : public std::string
{
    friend std::istream &operator>>(std::istream &is, Line &line)
    {
      return std::getline(is, line);
    }
};

#endif
