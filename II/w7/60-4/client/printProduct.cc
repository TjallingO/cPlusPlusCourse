#include "client.ih"

void Client::printProduct()
{

  ofstream outputStream(d_outputFile);

  while(!d_warehouse -> empty() || !d_warehouse -> isitfinished())
  {
    outputStream << d_warehouse -> getProduct() << '\n';
    d_nrlines += 1;
    cout << size() << '\n';
    this_thread::sleep_for(1s);
  }
}
