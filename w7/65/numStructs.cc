#include "main.ih"

size_t numStructs(const char *filePath)
{
  std::ifstream dFile(filePath, std::ios::binary);  // Open the file
  dFile.seekg(0, ios_base::end);  // Go to last position in stream
  size_t size = dFile.tellg();    // Get that position, assign to size
  dFile.close();                  // Dissassociate file from stream
  return size / sizeof(acct_v3);  // Return position divided by struct size,
}                                 // i.e. how many structs the file contains
