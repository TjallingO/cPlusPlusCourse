#ifndef INCLUDED_INSERTABLE_
#define INCLUDED_INSERTABLE_

#define HDR_  template <typename Data, \
              template <typename, typename> class Container, \
              template <typename> class AllocationPolicy>

template <
          typename Data,
          template <typename, typename> class Container = std::vector,
          template <typename> class AllocationPolicy = std::allocator
         >
class Insertable: public Container<Data, AllocationPolicy<Data>>
{
  using Cont = Container<Data, AllocationPolicy<Data>>;

  public:
    Insertable();
    Insertable(const Cont &rhs);
    Insertable(Cont &&rhs);
    Insertable(const Insertable &rhs);
    Insertable(Insertable &&rhs);
    Insertable(Data &&rhs);
};

// Constructors just call constructor of underlying type
HDR_
Insertable<Data, Container, AllocationPolicy>::Insertable()
  : Cont()
{};
HDR_
Insertable<Data, Container, AllocationPolicy>::Insertable(const Cont &rhs)
  : Cont(rhs)
{};
HDR_
Insertable<Data, Container, AllocationPolicy>::Insertable(Cont &&rhs)
  : Cont(rhs)
{};
HDR_
Insertable<Data, Container, AllocationPolicy>::Insertable(const Insertable &rhs)
  : Cont(rhs)
{};
HDR_
Insertable<Data, Container, AllocationPolicy>::Insertable(Insertable &&rhs)
  : Cont(rhs)
{};
HDR_
Insertable<Data, Container, AllocationPolicy>::Insertable(Data &&rhs)
  : Cont(rhs)
{};

#include "insertion.h"  // Free function, but connected to this class

#undef HDR_
#endif
