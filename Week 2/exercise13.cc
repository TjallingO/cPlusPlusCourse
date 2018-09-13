// Programming in C/C++
// Week 2: Assignment 13
// Tjalling Otter & Emiel Krol

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  size_t numberOfLines = 0;
  string extractedLine;

  if (argc == 2 && string(argv[1]) == "ok")
  {
    while (true)
    {
      if (!getline(cin, extractedLine))
        break;
      numberOfLines++;
    }
  }
  else
  {
    while (!cin.eof())
    {
      getline(cin, extractedLine);
      numberOfLines++;
    }
  }
  cout << numberOfLines << '\n';
}

// Run with ./exercise13 [ok] < ./fileForExercise13.txt
