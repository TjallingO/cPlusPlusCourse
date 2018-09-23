// Programming in C/C++
// Week 2: Assignment 18
// Tjalling Otter & Emiel Krol

#include <iostream>
using namespace std;

enum commandOptions
{
  store, add, subtract, multiply, divide, ret, invalid
};

int main()
{
  size_t programVariable = 0; // Define and initialise program's variable

  cout << "Welcome to fake assembly \n";  // Welcome message

  while (true)
  {
    string inputString;         // Define the user's input string
    string command;             // Define the part of input that is the command
    size_t parameter;           // Define the part that is the parameter

    commandOptions enumCommand; // Define the command in enum form

    cout << "> ";               // User prompt

    getline(cin, inputString);  // Get user input
    size_t spacePosition = inputString.find(' '); // Find space, if any

    if (spacePosition != string::npos)
    {
      command = inputString.substr(0,spacePosition);
      parameter = stoul(inputString.substr(spacePosition,inputString.length()));
    }
    else
      command = inputString;
    // If there is a space, the first word is the command, the second is the
    // parameter. Otherwise, the command is just the input string.

    if (command == "ret")       // Matching string to enum command
      enumCommand = ret;        // Again, not very pretty,
    else if (command == "sto")  // but I could not think of
      enumCommand = store;      // another way to return
    else if (command == "add")  // integers for the switch
      enumCommand = add;
    else if (command == "sub")
      enumCommand = subtract;
    else if (command == "mul")
      enumCommand =  multiply;
    else if (command == "div")
      enumCommand = divide;
    else
      enumCommand = invalid;

    switch (enumCommand)              // Switch statement for the commands
    {
      case ret:                       // Return command. Ends program.
        cout << "Program ended. The variable ended as having value "
             << programVariable << "\n";
        return 0;
      case store:                     // Store (sto) command
        programVariable = parameter;
        break;
      case add:                       // Add (add) command
        programVariable += parameter;
        break;
      case subtract:                  // Subtract (sub) command
        programVariable -= parameter;
        break;
      case multiply:                  // Multiply (mul) command
        programVariable *= parameter;
        break;
      case divide:                    // Divide (div) command
        if(parameter == 0)            // With check for /0
          cout << "Division by zero is undefined. \n";
        else
          programVariable /= parameter;
        break;
      case invalid:
        [[fallthrough]];
      default:                        // Invalid input
        cout << "No instruction '" << command << "' \n";
        cin.clear();                  // Clearing unread input, otherwise
        cin.sync();                   // there will be an infinite loop
        break;
    }
    cout << programVariable << "\n";   // After each loop, print the variable
  }
}
