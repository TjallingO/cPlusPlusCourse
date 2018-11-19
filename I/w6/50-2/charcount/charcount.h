#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iostream>

class CharCount
{
    public:
      struct Char
      {
        char ch;      //the character
        size_t count = 0; //number of occurences
      };

      struct CharInfo
      {
        Char *ptr = new Char[8]; //field ptr pointing to struct char objects
        size_t nChar = 0; //nr char objects stored
      };

      size_t d_cap = 255;
      size_t d_size = 8;//nodig voor?

      CharInfo d_charObject;


      CharCount(std::istream& stream);

      char getChar(size_t index);
      size_t getCount(size_t index);
      size_t capacity();


      void enlarge();
      void destroy();
      void append(char character);
      void existsCheck(char character, bool *exists);
      void add(char character);
      Char *charSorter(Char *array, size_t size);
};

inline char CharCount::getChar(size_t index)
{
  return d_charObject.ptr[index].ch;
}
inline size_t CharCount::getCount(size_t index)
{
  return d_charObject.ptr[index].count;
}
inline size_t CharCount::capacity()
{
  return d_size;
}


#endif
