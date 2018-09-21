// Programming in C/C++
// Week 3: Assignment 21
// Tjalling Otter &  Emiel Krol

#include <iostream>
#include <initializer_list>

using namespace std;

// factorise identical code into additional functions?

struct ReturnValues
{
  bool TrueOrFalse;
  size_t argumentNumber;
  string argument;
};

void structCall(int nr, char const *arguments[])
{
  //storing combines return value?
  cout << "structCall stores the return values\n";
  if(!arguments[nr])
  cout << "Requested argument does not exist.\n";
  if(arguments[nr])
  {
  //  ReturnValues input = {}; //&& toegevoegd werkt nog steeds?
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

void combine(int argc, char const *argv[])
{

}

void boundCall(int nr, char const *arguments[])
{

  //also calls combine?
  //ReturnValues *input2 = &input;
  cout << "boundCall does not store the return values\n";
  cout << "The requested argument number is " << nr << '\n';
  cout << "The requested argument is " << arguments[nr] << '\n';

}

void boundCall()
{
  cout << "Error no arguments\n";
}

//if argc >= argv[1]                  To do
int main(int argc, char const *argv[])
{
  if(argv[1]!= NULL)
  {
  int number = stoul(argv[1]);
  structCall(number,argv);
  boundCall(number,argv);
  }
  if(argv[1]==NULL)
  structCall();
  return 0;
}
