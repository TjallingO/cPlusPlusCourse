// Programming in C/C++
// Week 1: Assignment 4
// Tjalling Otter &  Emiel Krol

#include <iostream>
#include <string>


using namespace std;

int main() {
  string text;
  string lastword;

  cout << "Enter text\n";
  getline(cin,text);

  unsigned int count = text.length();
  unsigned int count2;

  //manier 1

  while (isspace(text[count]) == false) {
    count--;
  }

  for (size_t count2 = count+1; count2 < text.length(); count2++)
  {
    lastword += text[count2];
  }

  for (size_t count3 = 0; count3 < lastword.length(); count3++)
  {
    text.pop_back();
  }

  lastword += ' ';
  text.insert(0,lastword);

  cout << "After transformation your text is:\n" << text << '\n';

}
