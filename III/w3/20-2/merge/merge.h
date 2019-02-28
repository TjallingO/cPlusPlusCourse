#ifndef INCLUDED_MERGE_
#define INCLUDED_MERGE_

#include <iostream>
#include <cstdarg>

#include "../chars/chars.h"
#include "../onechar/onechar.h"

//typedef Chars<char ...ch> chars;

// typedef OneChar<character> onechar;

template <template<char ...ch> typename chars, template<char onechar> typename onech>
//template <Chars<char...> chars, OneChar<typename character2> onechar>
class Merge
{
  public:

    // void CP()
    // {
    //     std::cout << chars;
    // }

    // template <char ...ch>
    // std::ostream CP(); //moet Chars object returnenn

  private:
};

// template <Chars chars<...ch>, OneChar onechar>
// std::ostream Merge<chars<ch...>, onechar>::CP()
// {
//   std::ostream out;
//   out << chars1;//<char ...chars>;
//   return out;
// }


#endif
