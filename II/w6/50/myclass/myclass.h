#ifndef INCLUDED_MYCLASS_
#define INCLUDED_MYCLASS_

#include <vector>
#include <set>
#include <istream>
#include <iterator>

class myClass
{
    std::vector<std::string> vs;

    friend std::istream &operator>>(std::istream &istr, myClass &wrapper);

    struct lines
    {
      std::string d_line;
    };

    public:
      void print();
      //std::istream &operator>>(std::istream &istr);

      //virtual ~myClass();
    private:

};



#endif
