#include "main.ih"

void destroy(clOptions toBeDeleted)
{
  delete[] toBeDeleted.filePaths; // Release the memory
}
