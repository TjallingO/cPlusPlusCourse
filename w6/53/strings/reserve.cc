#include "strings.ih"

void Strings::reserve(size_t newCapacity)
{
  while (d_capacity < newCapacity)  // Keep doubling while capacity is still low
  {
    size_t oldcapacity = d_capacity;  // Old capacity needed to transfer pointers
    d_capacity *= 2;  // Double capacity when needed

    string **tmp = rawPointers(d_capacity); // Create new pointer to raw pointers
    for (size_t idx = 0; idx != oldcapacity; ++idx) // Transfer over old pointers
      tmp[idx] = d_pPstrings[idx];

    destroy();  // Destroy old pointer
    d_pPstrings = tmp;  // Assign old pointer to new location
  }
};
