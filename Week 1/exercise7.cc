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

  cout << "the value " << value << " is " << ((value &(value - 1)) ? "not " : "") << "an exact power of two" << '\n';
}
