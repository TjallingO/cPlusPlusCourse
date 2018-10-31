#include "main.ih"

size_t numStructs(const char *filePath)
{
  std::ifstream dFile(filePath, std::ios::binary);
  dFile.seekg(0, ios_base::end);
  size_t size = dFile.tellg();
  dFile.close();
  return size / sizeof(acct_v3);
}
