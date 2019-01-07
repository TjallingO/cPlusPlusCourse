#include "strings.ih"

Strings::Strings(const Strings& input)
{
  //for (const auto &idx: input.d_str)
  //  idx = input.d_str[idx];
  for (size_t idx = 0; idx < input.d_str.size(); ++idx)
  {
    d_str.push_back(new string(*input.d_str.at(idx)));
    cout << *input.d_str.at(idx) << '\n';
  }
}
