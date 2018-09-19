// Programming in C/C++
// Week 2: Assignment 18
// Tjalling Otter & Emiel Krol

#include <iostream>
using namespace std;

int main()
{
  size_t programVariable = 0;

  cout << "Welcome to fake assembly \n";

  while(true)
  {
    string command;
    size_t parameter;

    cout << "> ";

    cin >> command;
    if(command == "ret")
    {
      cout << "Program has ended. The variable ended with the value " << programVariable << '\n';
      break;
    }
    else
    {
      cin >> parameter;
    }

    switch (command[0])
    {
      case 's':
		if (command[1] == 't')
		{
		  programVariable = parameter;
          break;
		}
        else
        {
		  programVariable -= parameter;
          break;
        }
		break;
      case 'a':
        programVariable += parameter;
        break;
      case 'm':
        programVariable *= parameter;
        break;
      case 'd':
        if(parameter == 0)
        {
          cout << "No instruction 'store' \n";
          break;
        }
        else
        {
          programVariable /= parameter;
          break;
        }
      default:
        cout << "Invalid input. \n";
        break;
    }
    cout << programVariable << '\n';
  }
}
