#include "strings.ih"

void Strings::add(char *novelString)
{
  std::string *temporary = static_cast<std::string *>(
    operator new((d_size + 1) * sizeof(std::string)));

  for (size_t index = 0; index != d_size; ++index)
    temporary[index] = d_str[index];

  temporary[d_size] = novelString;
  destroy();
  d_str = temporary;

  ++d_size;
}
