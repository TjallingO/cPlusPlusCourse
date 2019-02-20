#include "data.ih"

void Data::print() const
{
  for (size_t idx = 0; idx != d_data.size(); ++idx)
    cout << *d_data[idx] << '\n';
}
