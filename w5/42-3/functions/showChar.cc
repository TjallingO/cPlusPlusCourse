// Programming in C/C++
// Week 4: Assignment 42
// Tjalling Otter & Emiel Krol

#include "../charcount/charcount.h"
//#include "42.h"

using namespace std;

void showChar(CharCount input)
{
  for (size_t index = 0; index < input.getnChar(); ++index)
  {
    if (input.getCount(index) != 0)
    {
      if (input.getChar(index) == ' ')
        cout << ' ' << "  :" << '\t';
      else if(input.getChar(index) == '\t')
        cout << "\\t" << ':' << '\t';
      else if(input.getChar(index) == '\n')
        cout << "\\n" << ':' << '\t';
      else if(isprint(input.getChar(index)))
        cout << "\"" << input.getChar(index) << "\"" << ':' << '\t';
      else
        cout << (int)input.getChar(index) << ':' << '\t';
    }
    cout << input.getCount(index) << '\n';
  }
}

//printing output
