// Programming in C/C++
// Week 4: Assignment 42
// Tjalling Otter & Emiel Krol

#include "42.ih"


void showChar(CharCount input)
{
  for (size_t index = 0; index < input.nChar(); ++index)
  {
    char character = input.getChar(index);
      switch (character)
      {
        case '\t':
        {
          cout << "\'\\t\'" << ':' << '\t';
          break;
        }
        case '\n':
        {
          cout << "\'\\n\'" << ':' << '\t';
          break;
        }
      }

      if  (isprint(character))  //printing printable characters
        cout << "\'" << character << "\'" << ':' << '\t';
      else if (character != '\n' && character != '\t')
        cout << static_cast<int>(character) << ':' << '\t';
        //printing the other characters, checking for \n  and \t
        //so they arent printed twice, as a value between 0 and 255
      cout << input.Count(index) << '\n';
      //printing the number of occurence of each char
  }
}
//printing output
