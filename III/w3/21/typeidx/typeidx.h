#ifndef INCLUDED_TYPEIDX_
#define INCLUDED_TYPEIDX_

template<typename NeedleT, typename LastT>
class TypeIdx
{
  public:

    enum
    {
      value = 1
    };

  private:
};

template<typename NeedleT, typename next, typename ...RestT>
class TypeIdx
{
  public:

    enum
    {
      value = 1 + TypeIdx<NeedleT, RestT...>::value
    };

  private:
};



#endif
