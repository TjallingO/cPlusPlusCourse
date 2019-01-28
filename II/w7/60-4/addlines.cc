#include "main.ih"
//waarom niet member van warehouse? private
void addlines(Warehouse &warehouse, istream &input)
{
  string inputString;
  while (cin >> inputString)      // While there is still user input
    warehouse.addProduct(inputString);  // Push that input to the queue

  warehouse.finished();           // When input is done, signal that
}
