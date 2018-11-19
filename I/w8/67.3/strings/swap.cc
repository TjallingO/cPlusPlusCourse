#include "strings.ih"

void Strings::swap(Strings &other)
{
  char bytes[sizeof(Strings)];
  memcpy(bytes, this, sizeof(Strings));
  memcpy(this, &other, sizeof(Strings));
  memcpy(&other, bytes, sizeof(Strings));

  //swap(d_str, other.d_str);
  //swap(d_size, other.d_size);
  //swap(d_capacity, other.d_capacity);
}
