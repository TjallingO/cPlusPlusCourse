// Programming in C/C++
// Week 1: Assignment 15
// Tjalling Otter &  Emiel Krol

#include <iostream>
#include <string>
//#include <sstream>
//#include <fstream>

using namespace std;
//use with textEx15.txt

int main()
{
  unsigned int totallines = 0;
  unsigned int linenumber = 0;
  unsigned int emptylines = 0;
  unsigned int lastlinewithtext = 0;

  bool islastline = false;                  //If a line without text is read this value becomes 1,
                                            //if a line with text is read afterwards it becomes 0 again.
  bool isfirstline = false;                 //simular for first line with text.

  ifstream text;
  text.open("textEx15.txt");

  string line;
  while (getline(text, line))                  //while to find first and last line with text
  {
    ++totallines;
    if (line.empty() & (islastline == false))          //finding last line with text
    {
      lastlinewithtext = totallines;
      islastline = true;
    }
    if (!line.empty())
      islastline = false;
    if (line.empty() & (isfirstline == false))         //finding first line with text
      ++emptylines;
    if (!line.empty() & (isfirstline == false))
      isfirstline = true;
  }

  text.close();
  text.open("textEx15.txt");                  //closing and opening the file so we can now use the filter.

  while (getline(text, line))                  //while loop to print text where the filter values are determined
  {                                           //in the while loop above.
    ++linenumber;
    if (emptylines < linenumber)               //removes whitespace above initial text
      if (lastlinewithtext > linenumber)       //lastlinewithtext > currentline
        cout << line <<'\n';
  }

}
