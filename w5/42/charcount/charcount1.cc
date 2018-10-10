#include "charcount.ih"

//CharCount::CharCount()
CharCount::CharCount()
//:
{
  //CharInfo CharInfoObject;

}

char CharCount::getChar(CharCount *input, size_t index)
{
  return (*input).CharObject[index].ch;
}

size_t CharCount::getCount(CharCount *input, size_t index)
{
  return (*input).CharObject[index].count;
}
