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

    static std::string letters();
    //returns the first character and keeps appending letters from the param
    //pack by calling itself without the the First char. Then once there is
    //no more input the other letters() function from the <> specialization is
    //called which does not call another function, ending the recursion.

    template <char First2, char... CharsT2>
    friend std::ostream &operator<<(std::ostream &out,
                                    Chars<First, CharsT...> const &rhs);
    //calls letters() and passes all characters to out
};


template <>
class Chars<>
{
  public:

    static std::string letters();
    //called when there are no more characters in the parameter pack,
    //ending the recursion.
};

template <char First, char... CharsT>
std::string Chars<First, CharsT...>::letters()
{
  return First + Chars<CharsT...>::letters();
}


template <char First, char... CharsT>
std::ostream &operator<<(std::ostream &out,
                                Chars<First, CharsT...> const &rhs)
{
  out << rhs.letters();
  return out;
}

//template <>
std::string Chars<>::letters()
{
  return "";
}


#endif
