// Programming in C/C++
// Week 4: Assignment 42
// Tjalling Otter & Emiel Krol

#include "charcount/charcount.h"
using namespace std;

void charDisplay(CharCount *input)
{
  for (size_t index = 0; index < 255; ++index) {
    cout << CharCount::getChar(&input, index) << '\n';
    cout << CharCount::getCount(&input, index) << '\n';
    /*
    if  (input.CharObject[index].ch == ' ' && input.CharObject[index].count != 0)
      cout << " " << ":" << '\t' << input.CharObject[index].count << '\t' << index << '\n';
    if  (input.CharObject[index].ch == '\t' && input.CharObject[index].count != 0)
      cout << "\\t" << ":" << '\t' << input.CharObject[index].count << '\t' << index << '\n';
    if (input.CharObject[index].ch == '\n' && input.CharObject[index].count != 0)
      cout << "\\n" << ":" << '\t' << input.CharObject[index].count << '\t' << index << '\n';
    if (input.CharObject[index].ch != ' ' && input.CharObject[index].ch != '\n' && input.CharObject[index].ch != '\t' && CharObject[index].count != 0)
    cout << input.CharObject[index].ch << '\t' << input.CharObject[index].count << '\t' << index << '\n';
    */
  }
}
