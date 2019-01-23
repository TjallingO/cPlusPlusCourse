#include "handler.ih"

void Handler::shift(ostream &out, string const &text)
{
  size_t counter = 0;

  for (size_t idx = 0; idx != text.length(); ++idx)
  {
    for (size_t idx2 = 0; idx2 != text.length(); ++idx2)
    {
      out << text[counter % text.length()];
      ++counter;
    }
    out << '\n';
    ++counter;
  }

  // Second approach:
  // string outputString = text;
  // out << outputString;
  // for (size_t idx = 0; idx != text.length() - 1; ++idx)
  // {
  //   outString += outString.front();
  //   outString.erase(0, 1);
  //   out << outString << '\n';
  // }
}
