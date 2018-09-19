// Programming in C/C++
// Week 2: Assignment 18
// Tjalling Otter & Emiel Krol

#include <iostream>
using namespace std;

enum commandOptions                             // enum representations of
{                                               // command options
  store, add, subtract, multiply, divide, ret
};

commandOptions matchEnum(string const& command) // enums for the commands
{
  if (command == "sto") return store;           // It is not very pretty,
  if (command == "add") return add;             // but the switch statement
  if (command == "sub") return subtract;        // really wants integers
  if (command == "mul") return multiply;
  if (command == "div") return divide;
};

int main()
{

  size_t programVariable = 0; // Initialise the program's variable

  cout << "Welcome to fake assembly \n";  // Welcome message

  while(true) // Infinite loop to create interactive prompt
  {
    string command; // Initialise the command string
    size_t parameter; // Initialise the numerical parameter

    cout << "> "; // Input prompt

    cin >> command; // First input is the command (string)
    if(command == "ret")  // Quick check if the user wants to exit
    {
      cout << "Program has ended. The variable ended with the value " << programVariable << '\n';
      break;
    }
    else  // If not, the second word is the parameter
    {
      cin >> parameter;
    }

    switch (matchEnum(command))       // Switch statement for the commands
    {
      case store:                     // Store (sto) command
  		  programVariable = parameter;
        break;
      case add:                        // Add (add) command
        programVariable += parameter;
        break;
      case subtract:                   // Subtract (sub) command
  		  programVariable -= parameter;
        break;
      case multiply:                   // Multiply (mul) command
        programVariable *= parameter;
        break;
      case divide:                     // Divide (div) command
        if(parameter == 0)             // With check for /0
        {
          cout << "No instruction 'store' \n";
          break;
        }
        else
        {
          programVariable /= parameter;
          break;
        }
      default:                          // Invalid input
        cout << "Invalid input. \n";
        cin.clear();                    // Clearing unread input, otherwise
        cin.sync();                     // there will be an infinite loop
        break;
    }
  cout << programVariable << '\n';      // Output of variable
  }
}
