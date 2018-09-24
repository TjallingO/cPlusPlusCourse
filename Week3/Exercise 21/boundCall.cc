




#include "w3e21.h"
//#include <iostream>

using namespace std;


void boundCall(int nr, char const *arguments[])
{

  //also calls combine?
  //ReturnValues *input2 = &input;
  cout << "boundCall does not store the return values\n";
  if (arguments[nr])
  {
    cout << "The requested argument number is " << nr << '\n';
    cout << "The requested argument is " << arguments[nr] << '\n';
  }else
    cout << "The requested argument does not exist.\n";
}

void boundCall()
{
  cout << "Error no arguments\n";
}
