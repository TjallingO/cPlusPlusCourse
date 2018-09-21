// Programming in C/C++
// Week 2: Assignment 11
// Tjalling Otter & Emiel Krol

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  size_t number = stoul(argv[1]);             // Initialise and enter the integer

  for(size_t index = 1; index != 11; ++index) // For 1-10
    cout << index << " * " << number << " = " // Display those ...
         << index * number << '\n';           // ... multiplied by the integer
}
