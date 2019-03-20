#include "main.ih"

bool file_exists(const char *fileName)
{
  ifstream infile(fileName);
  return infile.good();
}
