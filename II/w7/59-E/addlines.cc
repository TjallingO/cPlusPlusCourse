#include "main.ih"

void addlines(Storage &warehouse, istream &input)
{
  string inputString;
  while (cin >> inputString)      // While there is still user input
    warehouse.push(inputString);  // Push that input to the queue

  warehouse.finished();           // When input is done, signal that
}
