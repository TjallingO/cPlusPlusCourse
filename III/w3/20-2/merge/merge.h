#ifndef INCLUDED_MERGE_
#define INCLUDED_MERGE_

#include <iostream>

#include "../chars/chars.h"
#include "../onechar/onechar.h"


template<class Chars, class OneChar>
class Merge
{
  public:

    // Chars d_chars;
    // OneChar d_onechar;

    //template<class Chars2, class OneChar2>
    template <char ...chars>
    std::ostream CP(); //moet Chars object returnenn

  private:
};

template <class Chars, class OneChar>
template <char ...chars>
std::ostream Merge<Chars, OneChar>::CP()
{
  std::ostream out;
  out << Chars<char ...chars>;
  return out;
}


#endif
