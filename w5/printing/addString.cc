#include "strings.ih"

void Strings::add(std::string &novelString)
{
  size_t numStrings = size();
  std::string *temporary = static_cast<std::string *>(
    operator new((numStrings + 1) * sizeof(std::string)));
  // Allocate new temporary pointer with enough space for d_size + 1 strings

  for (size_t index = 0; index != numStrings; ++index)
    temporary[index] = d_str[index];
  // Move old elements to new pointer

  temporary[numStrings] = novelString; // Add new element to temporary array
  destroy();  // Destroy the old pointer
  d_str = temporary; // Point d_str to the newly created memory

  incrementSize(); // Increment the number of elements
}
