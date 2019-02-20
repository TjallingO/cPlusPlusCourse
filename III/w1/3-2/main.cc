#include "main.ih"

int main(int argc, char const **argv)
{
  string *pStringArray = rawCapacity<string>(10); // Room for 10 strings
  operator delete(pStringArray);
}
