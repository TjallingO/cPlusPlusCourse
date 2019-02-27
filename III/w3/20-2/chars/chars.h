#ifndef INCLUDED_CHARS_
#define INCLUDED_CHARS_

//#include <tuple>
//#include <vector>
//#include <utility>
//#include <cstdarg>
#include <iostream>

template <char ...chars>
class Chars
{
  constexpr static char a[sizeof...(chars)] = { chars...};

  public:

    friend std::ostream &operator<<(std::ostream &out,
                                    Chars<chars...> const &rhs)
    {
      for (size_t idx = 0; idx < sizeof(a); ++idx)
        out << a[idx] << ' ';
      return out;
    }

  private:

};

#endif
