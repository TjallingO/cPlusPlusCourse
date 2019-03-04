#ifndef INCLUDED_TYPEIDX_
#define INCLUDED_TYPEIDX_

template<int counter, typename NeedleT, typename nextT, typename ...RestT>
class TypeIdx
{
  public:

    enum //nothing is added from this point if sizes(and thus types) are equal
    {
      located = (sizeof(NeedleT) == sizeof(nextT)) * (counter) +
                (sizeof(NeedleT) != sizeof(nextT)) *
                            TypeIdx<counter + 1, NeedleT, RestT...>::located
    };
};

template<int counter, typename NeedleT, typename LastT>
class TypeIdx<counter, NeedleT, LastT>
{
  public:

    enum
    {
      located = (sizeof(NeedleT) == sizeof(LastT)) * (counter)
    };
};

#endif
