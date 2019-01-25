#include "warehouse.ih"

void Warehouse::addProduct(string line)
{
  //lock_guard<mutex> lk(wMutex);
  //cout << "add " << line << '\n';
  d_queue.push(line);
//  if (d_queue.size() == 1)
//    condition.notify_all();
}
