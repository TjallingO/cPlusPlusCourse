// Programming in C/C++
// Week 3: Assignment 21
// Tjalling Otter &  Emiel Krol


#include "main.ih"

using namespace std;


int main(int argc, char const *argv[])
{
  if (argv[1] !=  NULL)                //checking whether input is given
  {
  if (structCall(argc, argv) == false) //ending the program if the requested
    return 0;                          //argument does not exist and running
                                       //structCall
  boundCall(argc, argv);               //running boundCall
  }
  if (argv[1] == NULL)                 //if no input is given call structCall
    structCall();                      //that prints error.
  return 0;
}
