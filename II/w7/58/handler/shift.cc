#include "handler.ih"

void Handler::shift(ostream &out, string const &text)
{
  size_t counter = 0;                 // Counter for modulo
  size_t textLength = text.length();  // Length of string to avoid IRE

  for (size_t idx = 0; idx != textLength; ++idx)  // Loop length of string
  {
    for (size_t idx2 = 0; idx2 != textLength; ++idx2) // Loop again
    {
      out << text[counter % textLength];  // Output character based on counter
      ++counter;                          // Increment counter
    }
    out << '\n';                          // New line, new iteration
    ++counter;                            // Increment again after each 'word'
                                          // so that the shift occurs
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
