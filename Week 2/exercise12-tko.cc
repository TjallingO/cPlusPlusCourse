// Programming in C/C++
// Week 1: Assignment 12
// Tjalling Otter &  Emiel Krol

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string asciiSet;
  for (size_t forIndex = 0; forIndex < 254; forIndex++)
  {
    if (isalpha(forIndex))
    {
      asciiSet += (char) forIndex;
    }
  }
  cout << asciiSet << '\n';
}
