#include "strings.ih"

Strings::~Strings()
{
  for (size_t index = 0; index != d_size; ++index)  // For each element
    delete d_pPstrings[index];  // Delete that element (also call its destructors)
  destroy();  // Call original destroy(); one last time
}
