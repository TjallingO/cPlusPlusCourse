#ifndef INCLUDED_MYCLASS_
#define INCLUDED_MYCLASS_

#include <vector>

#include <istream>

class myClass: public std::vector<std::string>
{
      friend std::istream &operator>>(std::istream &istr, std::vector<std::string> &vs);
    public:

      //virtual ~myClass();
    private:

};



#endif
