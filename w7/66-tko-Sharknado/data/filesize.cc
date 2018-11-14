#include "data.ih"

std::ifstream::pos_type Data::filesize(const string filename)
{
  std::ifstream input(filename, std::ifstream::ate | std:: ifstream::binary);
  return input.tellg();
  input.close();
}
