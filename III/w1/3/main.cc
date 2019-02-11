#include "main.ih"


int main(int argc, char const **argv)
{
  string *pStringArray = rawCapacity<string>(10);
  pStringArray[1] = "hello";
  cout << pStringArray[1];
  delete[] pStringArray;
}
