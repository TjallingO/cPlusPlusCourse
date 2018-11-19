#include "strings.ih"

void Strings::add(string const &next)
{
  if(d_size + 1 > d_capacity) // If there is no room for the new addition
    reserve(d_size + 1);      // Create new room

  new(d_pPstrings + d_size ) std::string{ next };  // Add the new string
  ++d_size; // Increase size
}
