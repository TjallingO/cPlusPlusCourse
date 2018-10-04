// Programming in C/C++
// Week 4: Assignment 36
// Tjalling Otter & Emiel Krol
// Memory function: store


#include "memory.ih"

void Memory::store(size_t value, size_t *address)
{
  *address = value;
}
