#include "w3e21.h"

using namespace std;

bool structCall(int argc, char const *arguments[])
{
  size_t nr = stoul(arguments[1]);

  if(argc < nr){
    cout << "Requested argument does not exist.\n";
    return false;
  }

  string requestedarg = arguments[nr - 1];

  ReturnValues input;
  combine(&input, nr, requestedarg);

  cout << "structCall stores the return values\n";
  if (requestedarg.empty()){
    cout << "Requested argument does not exist.\n";
  }
  else
  {
    cout << "The requested argument number is " << input.argumentNumber << '\n';
    cout << "The requested argument is " << input.argument << '\n';
  }
  return true;
}
