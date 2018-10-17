#include "strings.ih"

void Strings::add(char const *novelString)
{
  std::string *temporary = new string[d_size + 1];
  // Create a pointer temporary that points towards a newly
  // piece of memory in which an array of
  // d_size + 1 initialised strings are held

  for (size_t index = 0; index != d_size; ++index)
    temporary[index] = d_str[index];
  // Transfer over the current array of strings to temporary

  temporary[d_size] = novelString;
  // Add the new element to the end of temporary

  delete[] d_str;
  // Delete/deallocate the memory currently pointed at by d_str

  d_str = temporary;
  // Point d_str to the memory pointed at by temporary

  ++d_size;
  // Increment d_size
}
