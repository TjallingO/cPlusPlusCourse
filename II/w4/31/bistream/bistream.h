#ifndef INCLUDED_BISTREAM_
#define INCLUDED_BISTREAM_

#include <ostream>
#include <fstream>
//#include <streambuff>

class BiStream : public std::ostream
{
      std::streambuf *d_buf1;
      std::streambuf *d_buf2;

    public:
      BiStream(std::ofstream one, std::ofstream two);



    private:
};

#endif
