// Programming in C/C++
// Week 2: Assignment 14
// Tjalling Otter &  Emiel Krol

#include <iostream>
#include <string>


using namespace std;

int main()
 {
  //manier 2
  string text;
  string letter;

  cout << "Enter text\n";
  getline(cin,text);                        //input
  text.insert(0, " ");                      //Adding a space to begging of string.

  unsigned int count = text.length()-1;     //Setting the counter to the
                                            //last index of the string.

  while (isspace(text[count]) == false)     //Each iteration pushes the entire
                                            //line to the right by one until a
                                            //space is reached
  {
    letter = text[count];
    text.insert(0,letter);
    text.pop_back();
  }

  text.pop_back();                                //Removing the last entry
                                                  //which is a space.
  cout << "Rewritten line\n" << text << '\n';     //Printing output.
}
