// Programming in C/C++
// Week 2: Assignment 11
// Tjalling Otter & Emiel Krol

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  size_t number = stoul(argv[1]);

  for(size_t index = 1; index != 11; index++)
    cout << index << " * " << number << " = " << (index * number) << '\n';
}
