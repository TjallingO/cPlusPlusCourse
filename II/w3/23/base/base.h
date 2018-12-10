#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_

#include <iostream>

class Base
{
    public:
        Base();
        void hello()
        {
          std::cout << "Base says hello \n";
        };

    private:
};

#endif
/*
inline void Base::hello()
{
  std::cout << "Base says hello \n";
};
*/
