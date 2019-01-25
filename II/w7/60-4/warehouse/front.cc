#include "warehouse.ih"

string &Warehouse::front()
{
  return d_queue.front();
}
