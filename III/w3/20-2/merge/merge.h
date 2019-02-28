#ifndef INCLUDED_MERGE_
#define INCLUDED_MERGE_

#include <iostream>

#include "../chars/chars.h"
#include "../onechar/onechar.h"


template <Chars chars, OneChar onechar>
class Merge
{
  public:

    // Chars d_chars;
    // OneChar d_onechar;


    std::ostream CP(); //moet Chars object returnenn

  private:
};

template <Chars chars, OneChar onechar>
std::ostream Merge<Chars, OneChar>::CP()
{
  std::ostream out;
  out << chars1;//<char ...chars>;
  return out;
}


#endif
