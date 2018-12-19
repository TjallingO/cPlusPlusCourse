#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_

#include <iostream>

class Base
{
      std::string d_string = ""; //not used in Base but added here so that
                                 //Derived can use it and we can still use
                                 //the **Factory function without the strings
                                 //becoming gibberish for the first half due
                                 //to the classes having a different size.

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
