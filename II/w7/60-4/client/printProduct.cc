#include "client.ih"

void Client::printProduct()
{
  ofstream outputStream(d_outputFile);

  while(!(d_warehouse.empty() && d_warehouse.isitfinished()))
  {
    bool printit = true;
    string tmp = d_warehouse.getProduct(printit);

    if(printit)
    {
      outputStream << tmp << '\n';
      ++d_nrlines;
    }
  }
}
