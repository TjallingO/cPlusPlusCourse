#include "main.ih" //gebruik ik niet

std::ifstream::pos_type filesize(const string filename)
{
  std::ifstream input(filename, std::ifstream::ate | std:: ifstream::binary);
  return input.tellg();
  input.close();
}
