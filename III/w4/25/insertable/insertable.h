#ifndef INCLUDED_INSERTABLE_
#define INCLUDED_INSERTABLE_

#include <ostream>
#include <vector>
#include <iostream>
#include <memory>
#include <iterator>

template <typename Data,
template <typename, typename> class Container = std::vector,
template <typename> class AllocationPolicy = std::allocator>
class Insertable: public Container<Data, AllocationPolicy<Data>>
{
  public:
    using MyContainer = Container<Data, AllocationPolicy<Data>>;

    Insertable(const MyContainer &RHS) : MyContainer(RHS) {};
    Insertable(const Insertable &RHS) : MyContainer(RHS) {};
    Insertable() : MyContainer() {};
    Insertable(Data RHS): MyContainer(RHS) {};
    
    friend std::ostream &operator<<(std::ostream &out, const Insertable &ins)
    {
      std::copy (ins.begin(), ins.end(), std::ostream_iterator<Data>(out, "\n"));
      return out;
    };


};



#endif
