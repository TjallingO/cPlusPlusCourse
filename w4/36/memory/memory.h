// Programming in C/C++
// Week 4: Assignment 36
// Tjalling Otter & Emiel Krol
// Memory class: header file

#ifndef INCLUDED_MEMORY_
#define INCLUDED_MEMORY_

#include <iostream>

class Memory
{
    public:
      Memory();

    size_t load(size_t *valueAddress);
    void store(size_t value, size_t *address);
    private:

};

#endif
