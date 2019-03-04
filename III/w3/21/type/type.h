#ifndef INCLUDED_TYPE_
#define INCLUDED_TYPE_

#include "../typeidx/typeidx.h"

template<typename NeedleT, typename ...HayStackT>
class Type
{
  public:

    enum
    {
      located = 0 + TypeIdx<1, NeedleT, HayStackT...>::located
    };

  private:
};

template<typename NeedleT>
class Type<NeedleT>
{
  public:
    enum
    {
      located = 0
    };
};




#endif
