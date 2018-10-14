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
      Char *ptr = new Char[1]; //field ptr pointing to struct char objects
      size_t nChar = 0; //nr char objects stored
    };

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

};

inline char CharCount::getChar(size_t index)
{
  return d_charObject.ptr[index].ch;
}

inline size_t CharCount::getCount(size_t index)
{
  return d_charObject.ptr[index].count;
}


#endif
