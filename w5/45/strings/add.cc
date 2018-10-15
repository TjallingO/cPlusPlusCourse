#include "strings.ih"

void Strings::add(char *novelString, std::string *currentStrings)
{
  std::string *temporary = static_cast<std::string *>(operator new(d_size + 1 * sizeof(std::string)));
  for (size_t index = d_size; index--;)
    new(temporary + index) std::string{ d_str[index] };
  destroy
}
