#include "w3e21.h"

using namespace std;


void boundCall(int argc, char const *arguments[])
{
  size_t nr = stoul(arguments[1]);

  cout << "boundCall does not store the return values\n";
  cout << "The requested argument number is " << nr << '\n';
  cout << "The requested argument is " << combine(nr, arguments) << '\n';
}
