#include "w3e21.h"

using namespace std;


void boundCall(int argc, char const *arguments[])
{
  size_t nr = stoul(arguments[1]) - 1;
  cout << "boundCall does not store the return values\n";
  if (arguments[nr])
  {
    cout << "The requested argument number is " << nr << '\n';
    cout << "The requested argument is " << arguments[nr] << '\n';
  }else
    cout << "The requested argument does not exist.\n";
}
