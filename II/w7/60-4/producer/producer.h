#ifndef INCLUDED_PRODUCER_
#define INCLUDED_PRODUCER_

#include "../warehouse/warehouse.ih"
#include <memory>

class Producer
{
  Warehouse *d_destination; //shared ptr?

  public:
    Producer(Warehouse *warehouse);

    void makeProduct(string const line);
  private:
};

#endif
