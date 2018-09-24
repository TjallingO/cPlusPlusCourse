// Programming in C/C++
// Week 3: Assignment 21
// Tjalling Otter &  Emiel Krol




#include "main.ih"

using namespace std;




void combine(int argc, char const *argv[])
{

}

int main(int argc, char const *argv[])
{
  if (argv[1] !=  NULL)
  {
  int number = stoul(argv[1]);
  structCall(number, argv);
  boundCall(number, argv);
  }
  if (argv[1] == NULL)
  structCall();
  return 0;
}
