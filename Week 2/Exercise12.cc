// Programming in C/C++
// Week 1: Assignment 12
// Tjalling Otter &  Emiel Krol

#include <iostream>
#include <cmath>
#include <locale>
#include <string>

using namespace std;
//loop for appending all bit representations for ascII chars


int main() {

  string letterChar;
  string allAscii;
  string letters;
  locale loc("C");

  for (size_t count = 0; count < 256 ; count++)
  {

  letterChar = (char) count;
  if(isalpha(letterChar[count],loc))
  {
  letters.append(letterChar);
  }
  allAscii.append(letterChar);
  }

//  for (size_t count = 0; count < allAscii.length(); count++) {
//    letters.append(allAscii[count]);
//  }

  cout << allAscii << '\n';

  cout << letters << '\n';
//  cout << letters << '\n';

//  char c=1;
//  string a(2,c);
//  cout << a << '\n';
}
