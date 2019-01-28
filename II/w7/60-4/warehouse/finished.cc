#include "warehouse.ih"

void Warehouse::finished()
{
  d_finished = true;
  condition.notify_all();
}
