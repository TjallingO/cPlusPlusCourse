// Main file

#include "main.ih"

int main()
{
	Memory myMemory;
  size_t memoryLocation;
  myMemory.store(30, &memoryLocation);
  cout << myMemory.load(&memoryLocation);
}
