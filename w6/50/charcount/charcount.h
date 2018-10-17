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
      Char *ptr = 0; //field ptr pointing to struct char objects
      size_t nChar = 0; //nr char objects stored
    };

    size_t d_cap = 255;
    size_t d_size = 0;

    CharInfo d_charObject;

    CharCount(std::istream& stream);
    Char *enlarge(Char *old, size_t oldsize, size_t newsize);
    char getChar(size_t index);
    void firstChar(char character);
    void existsCheck(char character, bool *exists);
    void newChar(char character);
    size_t getCount(size_t index);
    Char *charSorter(Char *array, size_t size);
    CharInfo *info();
    size_t capacity(CharInfo d_charObject);
    void allocate();
    void destroy();
};

inline char CharCount::getChar(size_t index)
{
  return d_charObject.ptr[index].ch;
}

inline size_t CharCount::getCount(size_t index)
{
  return d_charObject.ptr[index].count;
}
/*
inline size_t CharCount::capacity(CharInfo d_charObject)
{
  return d_charObject.ptr;
}
*/

#endif
