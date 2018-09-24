




#include "w3e21.h"
#include "main.ih" //nodig?
#include <iostream>

using namespace std;

void structCall(int nr, char const *arguments[])
{
  //storing combines return value?
  cout << "structCall stores the return values\n";
  if (!arguments[nr])
  cout << "Requested argument does not exist.\n";
  if (arguments[nr])
  {
    ReturnValues input;
    input.TrueOrFalse = true;
    input.argumentNumber = nr;
    input.argument = arguments[nr];
    cout << "The requested argument number is " << input.argumentNumber << '\n';
    cout << "The requested argument is " << input.argument << '\n';
  }
}

void structCall()
{
  cout << "Error no arguments\n";
}
