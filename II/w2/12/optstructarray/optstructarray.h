#ifndef INCLUDED_OPTSTRUCTARRAY_
#define INCLUDED_OPTSTRUCTARRAY_

#include <cstddef>
#include <getopt.h>

class OptStructArray
{
    typedef struct option  OptStruct;

    size_t    d_n;
    OptStruct *d_opt;
    
    public:
        OptStructArray(size_t size);
        ~OptStructArray();

        OptStruct *get();
};

inline OptStructArray::~OptStructArray()
{
    delete [] d_opt;
}

inline OptStructArray::OptStruct *OptStructArray::get()
{
    return d_opt;
}

#endif
