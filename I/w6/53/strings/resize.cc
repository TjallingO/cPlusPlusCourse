#include "strings.ih"

void Strings::resize(size_t newSize)
{
  string newAddition = "";  // Empty string to use for filling
  if (newSize > d_size) // If newSize is larger than current size
    for (size_t index = 0; index != newSize - d_capacity; ++index)  // Fill
      add(newAddition);

  if (newSize < d_size) // If smaller
    for (size_t index = d_size; index != newSize - 1; index--)
      delete d_pPstrings[index]; // Delete those strings (as in d_tor)

  d_size = newSize; // Set new size to indicated size
                    // If newSize == d_size, this is SF, but better than including
                    // it in every if-statement
}
