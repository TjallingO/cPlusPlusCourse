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

  cout << "Enter line, type STOP after your last line.\n";
  while (getline(cin, line))                  //input for multiple lines
  {
    if (line == "STOP")                       //Typing STOP tells the program to
    break;                                    //stop asking for new lines

    string lastword;
    string linewithoutfirstword;

    if (!line.empty() && line.find(' ') != string::npos)
    {                               //checking that line is nonempty
                                    //and contains more than one word
     lastword = line.substr(line.find_last_of(' ') + 1, line.length() - 1);
                                    //finding the last word, adding
                                    //+1 so it doesnt print the space itself
     linewithoutfirstword = line.substr(line.find_first_of(' '), line.length() - 1);
                                    //finding the string without the first word.
     line = lastword + linewithoutfirstword;
    }                               //together they form the new line

    text = text + line + '\n';      //adding the line to the rest of the text
  }

  cout << text;                     //Printing output.
}
