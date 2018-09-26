// Programming in C/C++
// Week 1: Assignment 15
// Tjalling Otter &  Emiel Krol

#include <iostream>
#include <string>

using namespace std;

int main() {

  string text;
  string line;

  cout << "Enter line, type STOP after your last line.\n";
  while (getline(cin, line))                    //input for multiple lines
  {
    if (line == "STOP")                         //Typing STOP tells the program to
      break;                                    //stop asking for new lines

    if (!line.empty())
      text += line + '\n';                      //Adding current line to the text
                                                //if it is nonempty.

    if (line.empty() && !text.empty())           //Adding current line if its empty
    text += line + '\n';                        //only after there has been a line
  }                                             //with text.

  size_t count = text.length()-1;               //Setting a counter for accessing
  while (!text[count] || text[count] == '\n')   //the index of text
  {
    text.pop_back();                            //removing all empty space at
    --count;                                    //the end.
  }

  cout << text << "\n";                         //printing output


}
