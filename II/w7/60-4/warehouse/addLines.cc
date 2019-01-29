#include "warehouse.ih"

void Warehouse::addlines()
{
  string inputString;
  while (getline(cin, inputString))      // While there is still user input
    addProduct(inputString);      // Push that input to the queue

  finished();                     // When input is done, signal that
}
