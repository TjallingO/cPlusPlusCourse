#ifndef INCLUDED_DERIVED_
#define INCLUDED_DERIVED_

#include "../base/base.h"

class Derived: public Base
{
        std::string d_string = "";

    public:
        Derived();
        Derived(std::string const &input);

        ~Derived();

    private:
        void vHello(std::ostream &out) override
        {
          out << d_string << '\n';
        }
};



#endif
