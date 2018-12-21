#include "strings.ih"

string const &Strings::at(size_t idx) const
{
  if ( idx > d_vStrings.size() || idx < 0 )
    throw std::out_of_range( "idx out of range \n" );

  return *d_vStrings[idx];
}
