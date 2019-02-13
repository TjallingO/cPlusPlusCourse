#include "storage.ih"

Storage::Storage(std::initializer_list<size_t> const &list)
: d_data(list.begin(), list.end())
{
}
