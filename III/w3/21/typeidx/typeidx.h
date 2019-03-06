#ifndef INCLUDED_TYPEIDX_
#define INCLUDED_TYPEIDX_

template<int counter, typename NeedleT, typename nextT, typename ...RestT>
class TypeIdx
{
  public:

    enum //nothing is added from this point if sizes(and thus types) are equal
    {    //in which case located is equal to the counter
      located = (sizeof(NeedleT) == sizeof(nextT)) * (counter) +
                (sizeof(NeedleT) != sizeof(nextT)) *
                            TypeIdx<counter + 1, NeedleT, RestT...>::located
    }; //calls itself until only one parameter is left in RestT which then
};     //calls the corresponding specialization, ending the recursion

template<int counter, typename NeedleT, typename LastT>
class TypeIdx<counter, NeedleT, LastT>
{
  public:

    enum //zero if not same type, otherwise equal to counter
    {
      located = (sizeof(NeedleT) == sizeof(LastT)) * (counter)
    };
};

#endif
