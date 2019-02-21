#include "storage.ih"

template<typename Data>
void Storage::Storage(Data input)
{
  d_data(istream_iterator<Data>(cin), istream_iterator<Data>());
}
