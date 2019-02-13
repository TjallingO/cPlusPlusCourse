#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

#include <vector>

class Storage
{
  std::vector<size_t> d_data;

  public:
    Storage() = default;
    Storage(std::initializer_list<size_t> const &list);

    template <typename inputT>
    size_t operator[](inputT const inputVar) const;
};

#include "indexOp.h"  // Where does this go?

#endif
