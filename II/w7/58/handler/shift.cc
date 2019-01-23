#include "handler.ih"

void Handler::shift(ostream &out, string const &text)
{
  size_t counter = 0;
  size_t textLength = text.length();

  for (size_t idx = 0; idx != textLength; ++idx)
  {
    for (size_t idx2 = 0; idx2 != textLength; ++idx2)
    {
      out << text[counter % textLength];
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
