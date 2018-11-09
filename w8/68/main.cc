#include "main.ih"

int main(int argc, char *argv[])
{
  /*
    Filter filter(cin);                 // filters out initial and final
                                        // empty lines

    filter.display();                   // show the remaining lines to cout
    */
  
  size_t nrIterations = (int)*argv[1]; //cast
  bool copy = true;
  if (argv[2] == "move")
    copy = false;

  Strings teststring(nrIterations, copy);
}
