#include "client.ih"

void Client::printProduct()
{
  ofstream outputStream(d_outputFile);

  while(!d_warehouse -> empty() || !d_warehouse -> isitfinished())
  {
    string tmp = d_warehouse -> getProduct();

    if(!tmp.empty())
    {
      outputStream << tmp << '\n';
      ++d_nrlines;
    }
  }
}
