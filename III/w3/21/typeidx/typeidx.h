#ifndef INCLUDED_TYPEIDX_
#define INCLUDED_TYPEIDX_


// template<typename NeedleT, typename nextT, typename ...RestT>
// class TypeIdx
// {
//   public:
//
//     enum //nothing is added from this point if sizes(and thus types) are equal
//     {
//       value = 1 + (sizeof(NeedleT) != sizeof(nextT)) *
//                                       TypeIdx<NeedleT, RestT...>::value
//     };
// };
//
//
//
// template<typename NeedleT, typename LastT>
// class TypeIdx<NeedleT, LastT>
// {
//   public:
//
//     enum
//     {
//       value = 1
//     };
// };

template<int counter, typename NeedleT, typename nextT, typename ...RestT>
class TypeIdx
{
  public:

    enum //nothing is added from this point if sizes(and thus types) are equal
    {
      located = 1 + (sizeof(NeedleT) != sizeof(nextT)) *
                            TypeIdx<counter + 1, NeedleT, RestT...>::located
    };
};



template<int counter, typename NeedleT, typename LastT>
class TypeIdx<counter, NeedleT, LastT>
{
  public:

    enum //sets value to zero if nothing is found
    {
      located = 1 - (sizeof(NeedleT) != sizeof(LastT)) * ( counter + 1 )
    };
};

#endif
