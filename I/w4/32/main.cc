// Testing stuff

#include <string>
#include <iostream>

using namespace std;

string copyString(const string inputString)
{
  return inputString + "DEF";
};

int main()
{
  string initialString = "ABC";
  cout << initialString << "\n";
  cout << copyString(initialString) << "\n";
  cout << initialString << "\n";
}
