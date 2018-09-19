// Programming in C/C++
// Week 1: Assignment 15
// Tjalling Otter &  Emiel Krol

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;
//use with textEx15.txt

int main()
{
  //string text;
  unsigned int totallines =0;
  unsigned int linenumber =0;
  unsigned int emptylines =0;
  unsigned int lastlinewithtext =0;

  unsigned int i = 0;

  ifstream text;
  text.open("textEx15.txt");

  string line;
  while (getline(text,line))
  {
    totallines++;
    if(line.empty()&(i==0))          //finding last line with text
    {
      lastlinewithtext = totallines;
      i=1;
      //cout << "empty line" <<'\n';
    }
    if(!line.empty())
    {
      i=0;
      //cout << "not empty" << '\n';
    }
  }
  text.close();

  ifstream text2;
  text2.open("textEx15.txt");
  string line2;

  while (getline(text2,line2))
  {
    if(line2.empty())
    {
      emptylines++;
    }
      linenumber++;
      if(!line2.empty()|emptylines < linenumber)       //removes whitespace above initial text
    {
      if(lastlinewithtext > linenumber) //lastlinewithtext > currentline
      {
        cout << line2 <<'\n';
      }
    }
  }

  //cout << "total lines " << totallines << "empty lines " << emptylines << "lastlinewithtext " << lastlinewithtext <<'\n';
}
