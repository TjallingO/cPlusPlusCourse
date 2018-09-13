// Programming in C/C++
// Week 1: Assignment 9
// Tjalling Otter & Emiel Krol

#include <iostream>
#include <string>
using namespace std;

union bitfield
{
  unsigned int entry1;
  unsigned int entry2;
  unsigned int entry3;

} ;

int main()
{
  bitfield testing1;
  testing1.entry1 = 0;
  testing1.entry2 = 3;
  testing1.entry2 = 4;
  cout << "entry1 " << testing1.entry1  << '\n';
  cout << "entry2 " << testing1.entry2  << '\n';
  cout << "entry3 " << testing1.entry3  << '\n';
  cout << "bitfield " << testing1  << '\n';
}
