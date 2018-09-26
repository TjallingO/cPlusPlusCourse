// Programming in C/C++
// Week 3: Assignment 21
// Tjalling Otter &  Emiel Krol

#include "main.ih"

using namespace std;

int main(int argc, char const *argv[]) {

  string argument = argv[1];

  if (argument != "-c" && argument != "-w" && argument != "-l")
  {
    cout << "Available commands are -c -w and -l.\n";
    return 0;
  }

  //If wrong argument is provided the program is ended and the user is
  //given instructions about possible arguments.


  string text;
  string line;

  cout << "Enter line, type STOP after your last line.\n";
  while (getline(cin, line))                    //input for multiple lines
  {
    if (line == "STOP")                         //Typing STOP tells the program to
      break;                                    //stop asking for new lines

    text += line + "\n";                        //Adding current line to the text
  }

  if (argument == "-c")                         //character counter
    cout << "There are " << charcount(text) << " characters.\n";
  if (argument == "-w")                         //word counter
    cout << "There are " << wordcount(text) << " words.\n";
  if (argument == "-l")                         //line counter
    cout << "There are " << linecount(text) << " lines.\n";
}
