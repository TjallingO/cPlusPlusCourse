#include "client.ih"

Client::Client(Warehouse &warehouse, string const &outputFile)
: d_warehouse(warehouse),
  d_outputFile(outputFile)
{

}
