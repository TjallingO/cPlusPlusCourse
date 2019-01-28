#include "warehouse.ih"

void Warehouse::finished()
{
  d_finished = true;
  condition.notify_all(); //notify waiting processes there will be no more
                          //products so they should stop waiting for one.
}
