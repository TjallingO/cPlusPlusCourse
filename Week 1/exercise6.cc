// Programming in C/C++
// Week 1: Assignment 6
// Tjalling Otter & Emiel Krol

#include <iostream>
using namespace std;

int main()
{
  unsigned int value;

  cout << "Please type an integer." << '\n';
  cin >> value;

  // The popcount function counts the number of set bits (i.e. the number of ones in a binary number).
  // If it is exactly one, that means it is a power of 2.
  cout << (__builtin_popcount(value) == 1 ? "even" : "odd") << '\n';

  // The modulo operator, using the number 2, checks whether a value is fully divisble
  // (i.e. no remainder) by 2, and if so, returns 1 (true), else 0 (false).
  cout << (value % 2 ? "odd" : "even") << '\n';

  //
  cout << (value & 1 ? "odd" : "even") << '\n';

  // For integral divisions, any fractional part is discarded. Hence, any number divisible
  // by two will equal the initial value when multiplied by two again, others won´t.
  cout << ((value / 2) * 2 == value ? "even" : "odd") << '\n';
}
