#include "client.ih"

Client::Client(Warehouse *warehouse, string outputFile)
: d_warehouse(warehouse),
  d_outputFile(outputFile)
{
}
