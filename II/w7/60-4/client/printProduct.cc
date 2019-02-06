#include "client.ih"

void Client::printProduct()
{
  ofstream outputStream(d_outputFile);

  while(!(d_warehouse.empty() && d_warehouse.isitfinished()))
  {
    bool printit = true;
    //printit is used to distinguish between an empty string that should be
    //printed as it is an empty string in the warehouse and an empty string
    //that is returned because there is nothing in the warehouse. In the
    //latter case printit is set to false and it wont be printed.
    string tmp = d_warehouse.getProduct(printit);

    if(printit)
    {
      outputStream << tmp << '\n';
      ++d_nrlines;
    }
  }
}
