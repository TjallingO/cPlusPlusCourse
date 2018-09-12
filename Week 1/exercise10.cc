// Programming in C/C++
// Week 1: Assignment 10
// Tjalling Otter & Emiel Krol

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  size_t value = stoul(argv[1], 0, 16);         // initialize hexadecimal value
  size_t nibble = stoul(argv[2]);               // nibble to replace
  size_t replacement = stoul(argv[3]) % 16;     // new nibble (= 0 .. 15)

  replacement <<= (4 * nibble);                 // Shift the new nibble to its desired spot
  size_t offsetMask = 0b1111 << (4 * nibble);   // Create a mask to zero the nibble to be replaced
  value = (value & ~offsetMask) | replacement;  // First, zero the nibble to be replaced, then replace it with the new nibble

  cout << hex << value << '\n';                 // show the new value
}
