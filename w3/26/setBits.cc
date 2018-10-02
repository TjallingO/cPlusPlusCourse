// Programming in C/C++
// Week 3: Assignment 26
// Tjalling Otter & Emiel Krol
// Function: populate character array with bits from input file

#include "w3e26.h"

void setBits (uint8_t *byteArray, size_t numOps, const std::string fileAsString)
{
  size_t elementCounter = 0, last = 0, next = 0;  // Init counters
  char delimiter = ','; // Delimiter to find seperate actions

  while (elementCounter != numOps + 1) // While counter is not through list yet
  {
    next = fileAsString.find(delimiter, last);  // Find next delimiter position
    std::string subString = fileAsString.substr(last, next - last);
    // Create substring based on previous and newly found delimiter position

    last = next + 1;
    // Set start next action to just after previously found delimiter

    size_t byteIdx = arrayIndex(elementCounter);
    size_t withinIdx = withinIndex(elementCounter);
    // Find position in array for action, both element and within-element index

    if (subString.find("B") != std::string::npos)
      byteArray[byteIdx] |= buy << withinIdx * BitsPerValue;
    else if (subString.find("S") != std::string::npos)
      byteArray[byteIdx] |= sell << withinIdx * BitsPerValue;
    else
      byteArray[byteIdx] |= smthelse << withinIdx * BitsPerValue;
    // Set appropriate position within array to match substring

    ++elementCounter; // Increment element counter
  }
};
