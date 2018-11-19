#include "main.ih"

int main(int argc, char *argv[])
{

  size_t nrIterations = strtol(argv[1], NULL, 10);

  bool copy = true;
  string copyinput = argv[2];

  if (copyinput == "move")
    copy = false;

  Strings teststring(nrIterations, copy);

  teststring.iterate(environ);
  teststring.printstring();

}
