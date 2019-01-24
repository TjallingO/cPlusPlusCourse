#include "main.ih"

void printlines(Storage &warehouse, istream &input)
{
  string inputString;
  while (cin >> inputString)
    warehouse.push(inputString);

  warehouse.finished();
}
