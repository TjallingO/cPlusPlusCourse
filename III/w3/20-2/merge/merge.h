#ifndef INCLUDED_MERGE_
#define INCLUDED_MERGE_

template <class CharsT1, class CharsT2>
class Merge
{};

template <char ...CharsT1, char CharT2>
class Merge <Chars<CharsT1...>, OneChar<CharT2>>
{
  public:

    typedef Chars<CharsT1..., CharT2> CP;

};

template <char ...CharsT1, char ...CharsT2>
class Merge <Chars<CharsT1...>, Chars<CharsT2...>>
{
  public:

    typedef Chars<CharsT1..., CharsT2...> CP;
};



#endif
