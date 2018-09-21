// Programming in C/C++
// Week 2: Assignment 13
// Tjalling Otter & Emiel Krol

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  size_t numberOfLines = 0;						  // Initialise integer
  string extractedLine;							    // Initialise string

  if (argc == 2 && argv[1] == "ok"s)	  // If optional ok is given
  {
    while (true)								        // Infinite loop
    {
      if (!getline(cin, extractedLine))	// Until no more lines
        break;
      ++numberOfLines;							    // Increment integer
    }
  }
  else
  {
    while (!cin.eof())							    // If there is a line (also enter it)
    {
      getline(cin, extractedLine);			// Get line (again)
      ++numberOfLines;							    // Increment int
    }
  }
  cout << numberOfLines << '\n';				// Output the int
}

// Run with ./exercise13 [ok] < ./fileForExercise13.txt, which has five lines
