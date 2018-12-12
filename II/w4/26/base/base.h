#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_

#include <iostream>

class Base
{
  public:
    Base();
    void hello(std::ostream &out);

  private:
    virtual void vHello(std::ostream &out);
};

#endif

inline void Base::hello(std::ostream &out)
{
  vHello(out);
}
inline void Base::vHello(std::ostream &out)
{
  out << "Hello from base \n";
}
