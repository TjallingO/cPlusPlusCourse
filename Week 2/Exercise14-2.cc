// Programming in C/C++
// Week 2: Assignment 14
// Tjalling Otter &  Emiel Krol

#include <iostream>
#include <string>


using namespace std;

int main()
 {
  string line;
  string text;
  string letter;

  cout << "Enter line, type STOP after your last line.\n";
  while (getline(cin, line))                  //input for multiple lines
  {
    if (line=="STOP")                         //Typing STOP tells the program to
    break;                                    //stop asking for new lines

    size_t count = line.length() - 1;         //Setting the counter to the
                                              //last index of the string.
    string lastword;
    while (line[count] != ' ')           //Finds the last word of the line
    {
      letter = line[count];

      if (letter.compare(".") != 0)    //Keeping the period at the end of the line
        lastword.insert(0,letter);     //Saving the last word of the line

      --count;
    }

    count = 0;                         //resetting the index counter to 0
    while (!isspace(line[count])&&line.find(" ")!= string::npos)   //deleting the first word                                                                         //if there is more than one word
      line.erase(0,1);                             //if there is more than one.

    if (line.find(" ") != string::npos)       //Testing whether line is empty
      line = lastword + line;                 //Adding the last word to the start of the line if it is not

    text = text + line + '\n';                //Adding the line to the rest of the text
  }
  cout << text;                               //Printing output.
}
