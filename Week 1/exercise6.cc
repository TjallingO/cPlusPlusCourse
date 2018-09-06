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
  cout << (value % 2 ? "odd" : "even") << '\n';                 // The modulo operator, using the number 2, checks whether a value is fully divisble (i.e. no fractional numbers) by 2, and if so, returns 1 (true), else 0 (false)
  cout << (value & 1 ? "odd" leftovers : "even") << '\n';
  cout << ((value / 2) * 2 == value ? "even" : "odd") << '\n';
}
