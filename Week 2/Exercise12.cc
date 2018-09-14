// Programming in C/C++
// Week 1: Assignment 4
// Tjalling Otter &  Emiel Krol

#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;
//loop for appending all bit representations for ascII chars


int main() {

  string letters;
  string letter;

  for (size_t count = 0; count < 256 ; count++)
  {

    letter = (char) count;

    letters.append(letter);

  }
  cout << letters << '\n';
}
