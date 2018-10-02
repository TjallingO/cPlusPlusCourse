// Programming in C/C++
// Week 3: Assignment 26
// Tjalling Otter & Emiel Krol
// Function: print entire bit array

#include "w3e26.h"

void show (const uint8_t *byteArray, size_t numOperations)
{                   // For all stored actions
  for (size_t index = 0; index != numOperations; ++index)
  {
    switch (getField(byteArray, index)) // Output associated character
    {
      case buy:
        std::cout << 'B';
        break;
      case sell:
        std::cout << 'S';
        break;
      case smthelse:
        std::cout << 'E';
        break;
      default:
        std::cout << "\nSomething is broken. \n";
        break;
    }
    std::cout << ",";
  }
};
