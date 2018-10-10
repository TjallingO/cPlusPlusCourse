#include "w3e21.h"

using namespace std;

struct ReturnValues
{
  bool TrueOrFalse;
  size_t argumentNumber;
  std::string argument;
};

bool structCall(int argc, char const *arguments[])
{
  size_t nr = stoul(arguments[1]);

  ReturnValues input;                //initialising local struct named "input"

  input.argumentNumber = nr;                  //Assigning the number to input.

  if(argc < nr){ //Checking whether requested argument exists, if not returns
    cout << "Requested argument does not exist.\n";                   //false
    input.TrueOrFalse = false;
    return false;
  }

  input.argument = combine(nr, arguments);  //Assigning the requested argument
  input.TrueOrFalse = true;                                    //to the struct

  cout << "structCall stores the return values\n";//printing input's variables

  cout << "The requested argument number is " << input.argumentNumber << '\n';
  cout << "The requested argument is " << input.argument << '\n';

  return true;
}
