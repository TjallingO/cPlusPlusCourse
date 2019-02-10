#include "main.ih"

int main(int argc, char const **argv)
try
{
    if (argc == 3)
    {
        size_t threadNr = stoul(argv[1]); //total number of threads
        size_t stopAt = stoul(argv[2]); //number of threads that need to be
        //done before the program is considered done.

        threadstarter(threadNr, stopAt);
      }
      else
      {
        cout << "Please enter nr of desired threads and number of threads "
             << "that have to be finished for the program to end\n";
      }
}
catch(...)
{
  cout << "haHA caught one!\n";
}
