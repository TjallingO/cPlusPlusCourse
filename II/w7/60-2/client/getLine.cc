#include "client.ih"

string Client::getLine()
{
  unique_lock<mutex>ul (wMutex);
  while (warehouse.empty())
    condition.wait(ul);
  return warehouse.next();
}
