#ifndef INCLUDED_CHARS_
#define INCLUDED_CHARS_

#include <iostream>

template <char ...CharsT>
class Chars
{
  public:

  constexpr static std::string letters();

  template <char... CharsT2>
  friend std::ostream &operator<<(std::ostream &out,
                                  Chars<CharsT2...> const &rhs);
};


template <char... CharsT>
constexpr std::string Chars<CharsT...>::letters()
{
  return std::string{ CharsT... };
}


template <char... CharsT>
std::ostream &operator<<(std::ostream &out,
                                Chars<CharsT...> const &rhs)
{
  out << rhs.letters();
  return out;
}



#endif
