#include "warehouse.ih"

string Warehouse::getProduct()
{
  unique_lock<mutex> ul(wMutex);
  while (empty() && !d_finished)
    condition.wait(ul);
  if (!empty())
    return next();
  return "";
}
