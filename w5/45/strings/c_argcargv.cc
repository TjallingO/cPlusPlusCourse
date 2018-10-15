#include "strings.ih"

Strings::Strings(size_t numStrings, char **strings)
{
  std::string stringArray[numStrings];
  for (size_t index = 0; index != numStrings; ++index)
    {
      stringArray[index] = strings[index];
      std::copy(stringArray, stringArray + numStrings, d_str);
    }
}
