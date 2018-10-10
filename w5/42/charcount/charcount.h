#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iostream>

class CharCount
{

  struct CharInfo
  {
    //field ptr pointing to struct char objects
    size_t nChar; //nr char objects stored
  };

  CharInfo CharInfoObject;

  struct Char
  {
    char ch; //the character
    size_t count; //number of occurences
  };

  Char CharObject[255];

  //Char CharObject;

    public:
        //CharCount();
        CharCount();
        void count(std::istream& stream);
        void CharCounter(std::istream& stream);
      //  char getChar(Char input);
        char getChar(CharCount *input, size_t index);
        size_t getCount(CharCount *input, size_t index);
        //size_t getCount(Char input);
        //void count(void);
        //info(); //reference to immutable charcount object
    private:
};

#endif
