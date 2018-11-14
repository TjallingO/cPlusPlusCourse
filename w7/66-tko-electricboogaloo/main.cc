#include "main.ih"

int main(int argc, char const *argv[])
{
  string inputLoc = argv[1];
  string outputLoc = argv[2];
  string optionb;
  if (argv[3])
    optionb = argv[3];

  Data goodName(inputLoc, outputLoc);

  goodName.writeFile(optionb);

}
