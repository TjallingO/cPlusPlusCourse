#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iostream>

class CharCount
{

  struct CharInfo
  {
    size_t nSepChar; //field ptr pointing to struct char objects
    size_t nChar; //nr char objects stored
  };

  CharInfo charInfoObject;

  struct Char
  {
    char ch;      //the character
    size_t count; //number of occurences
  };

  //Char d_charObject[255];
  Char *d_charObject = new Char[charInfoObject.nSepChar];

  //Char CharObject;

    public:
        CharCount(std::istream& stream);
        void count(std::istream& stream);
        void CharCounter(std::istream& stream);
        size_t getNrChars();

        char getChar(size_t index);
        size_t getCount(size_t index);

        //info(); //reference to immutable charcount object

};

inline char CharCount::getChar(size_t index)
{
  return d_charObject[index].ch;
}

inline size_t CharCount::getCount(size_t index)
{
  return d_charObject[index].count;
}

inline size_t CharCount::getNrChars()
{
  return charInfoObject.nSepChar;
}
#endif
