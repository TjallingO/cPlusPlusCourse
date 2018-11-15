#include "strings.ih"

Strings Strings::operator=(Strings const &other)
{
  /*
    for (size_t idx = d_size; idx--; )  // delete all existing string objects
        d_str[idx].~string();
    delete[] d_str;
*/
    for (; d_size--; )
        delete d_str[d_size];


    delete[] d_str;



    *d_str = new string [other.d_size]; //moet even groot
    d_size = other.d_size;
    d_capacity = other.d_capacity;

  for (size_t idx = 0; idx != d_size; ++idx)
    d_str[idx] = other.d_str[idx];


  return *this;
}
