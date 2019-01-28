#include "warehouse.ih"

string Warehouse::next()
{
  string front = d_queue.front();     // Get element from queue
  d_queue.pop();                      // Remove that element

  return front;                       // Return it
}
