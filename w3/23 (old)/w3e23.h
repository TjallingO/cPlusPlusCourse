// Programming in C/C++
// Week 3: Assignment 23
// Tjalling Otter &  Emiel Krol
// Header file

#ifndef QUICKSORT
#define QUICKSORT
#include <iostream>
#include <string>
size_t partition(std::string &inputString, size_t left, size_t right);
void quicksort(std::string &inputString, size_t left, size_t right);
#endif
