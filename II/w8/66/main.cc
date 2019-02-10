#include "main.ih"

int main(int argc, char const **argv)
try
{
    if (argc == 3)
    {
        size_t Promnr = stoul(argv[1]);
        size_t stopAt = stoul(argv[2]);

        threadstarter(Promnr, stopAt);    
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
