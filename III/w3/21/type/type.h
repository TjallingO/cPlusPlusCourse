#ifndef INCLUDED_TYPE_
#define INCLUDED_TYPE_

#include "../typeidx/typeidx.h"

template<typename NeedleT, typename ...HayStackT>
class Type
{
  public:

    enum
    {
      value = 0 + TypeIdx<NeedleT, HayStackT...>::value
    };

  private:
};




#endif
