#ifndef INCLUDED_INSERTABLE_
#define INCLUDED_INSERTABLE_

#define HDR_  template <typename Data, \
              template <typename, typename> class Container, \
              template <typename> class AllocationPolicy>
#define CONT_ Container<Data, AllocationPolicy<Data>>
#define INS_  Insertable<Data, Container, AllocationPolicy>

#include <vector>
#include <memory>
#include <iterator>

template <typename Data,
template <typename, typename> class Container = std::vector,
template <typename> class AllocationPolicy = std::allocator>
class Insertable: public Container<Data, AllocationPolicy<Data>>
{
  public:
    Insertable();
    Insertable(const CONT_ &RHS);
    Insertable(const Insertable &RHS);
    Insertable(Data RHS);
};

#undef HDR_
#undef CONT_
#undef INS_
#endif
