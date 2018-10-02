// Programming in C/C++
// Week 3: Assignment 26
// Tjalling Otter & Emiel Krol
// Header file

#ifndef W3E26FUNCTIONS
#define W3E26FUNCTIONS

#include <iostream>
#include <string>

enum actions
{
  buy = 1, sell, smthelse // Starting at 1 to avoid problems with using 0
};

enum Constants
{
  BitsPerValue = 2,  // Var 'b'
  ValuesPerByte = (sizeof(uint8_t) * 8) / BitsPerValue
  // Coincides with one byte, but is catered to variable instead
};

size_t withinIndex (size_t elementN);
size_t arrayIndex (size_t elementN);
size_t getField (const uint8_t *byteArray, size_t elementN);

#endif
