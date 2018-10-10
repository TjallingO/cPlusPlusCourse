// Programming in C/C++
// Week 3: Assignment 21
// Tjalling Otter &  Emiel Krol


#include "main.ih"

using namespace std;


int main(int argc, char const *argv[])
{
  if (argv[1] !=  NULL)
  {
  //structCall(argc, argv);
  if (structCall(argc, argv) == false) //gaat hier ook naar cout?
    return 0;
  boundCall(argc, argv);
  }
  if (argv[1] == NULL)
  structCall();
  return 0;
}
