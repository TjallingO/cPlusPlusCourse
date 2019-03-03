#ifndef INCLUDED_CHARS_
#define INCLUDED_CHARS_

#include <iostream>

template <char ...CharsT>
class Chars
{};

template <char First, char... CharsT>
class Chars<First, CharsT...>
{
  public:

    static std::string letters()
    {
      return First + Chars<CharsT...>::letters();
    }

    friend std::ostream &operator<<(std::ostream &out,
                                    Chars<First, CharsT...> const &rhs)
    {
        out << rhs.letters();
      return out;
    }
};


template <>
class Chars<>
{
  public:

    static std::string letters()
    {
      return "";
    }
};


#endif
