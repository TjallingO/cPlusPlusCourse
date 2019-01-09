#include "strings.ih"

Strings::Strings(const Strings& input)
{
  cout << "copy\n";
  for (auto idx: input.d_str)
    add(*idx);
}
