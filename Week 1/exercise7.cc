// Programming in C/C++
// Week 1: Assignment 7
// Tjalling Otter & Emiel Krol

#include <iostream>
using namespace std;

int main()
{
  unsigned int value;

  cout << "Please type an integer." << '\n';
  cin >> value;

  // The bitwise AND operator will return the bits that are set in both values.
  // Hence, for a number that is a power of two, it will share exactly none of its
  // bits with that number minus one, thus returning zero (i.e. false). For example,
  // 8 (1000) & 7 (0111) = 0.
  cout << "the value " << value << " is " << ((value &(value - 1)) ? "not " : "") << "an exact power of two" << '\n';
}
