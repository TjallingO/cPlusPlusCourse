#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_

#include <iostream>

class Base
{
  public:
    Base();
    virtual ~Base();

    void hello(std::ostream &out)
    {
      vHello(out);
    };

  private:
    virtual void vHello(std::ostream &out);
};

#endif
