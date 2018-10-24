#include "strings.ih"

void Strings::reserve(size_t newCapacity)
{
  while (d_capacity < newCapacity)  // Keep doubling while capacity is still low
  {
    d_capacity *= 2;  // Double capacity when needed

    string *tmp = rawMemory(d_capacity); // Create new pointer to raw memory
    for (size_t idx = d_size; idx--; )  // Transfer over old strings
      new(tmp + idx) string{ d_pPstrings[idx] };

    destroy();  // Destroy old pointer
    d_pPstrings = tmp;  // Assign old pointer to new location
  }
};
