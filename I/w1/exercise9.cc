// Programming in C/C++
// Week 1: Assignment 9
// Tjalling Otter & Emiel Krol

#include <iostream>
#include <bitset>

using namespace std;

union bitFieldUnion
{
  value_t hexValue : 32;
};

int main()
{
  union bitFieldUnion hello;
  hello.hexValue = 1 << 3 | 7;
  bitset<8> x(hello.hexValue);
  cout << x;
}
