#ifndef INCLUDED_INSERTABLE_
#define INCLUDED_INSERTABLE_

#include <ostream>
#include <vector>

template <typename Data, template <typename> class AllocationPolicy, template <typename, typename> class Container = std::vector>
class Insertable: public Container<Data, AllocationPolicy<Data>>
{
  public:
    template <class D>
    std::ostream &operator<<(std::ostream &out);

  private:
};

#endif
