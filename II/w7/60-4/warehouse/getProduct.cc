#include "warehouse.ih"

string Warehouse::getProduct()
{
  unique_lock<mutex> ul(wMutex);
  while (empty() && !d_finished)
    condition.wait(ul);

  if (!empty())
    return next();
 return {};  //return empty string, which can happen if no more strings
              //are going to be available
}
