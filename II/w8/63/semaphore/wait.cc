#include "semaphore.ih"

void Semaphore::wait()
{
  unique_lock<mutex> lk(d_Mutex);

  while(d_nAvailable == 0)
    d_condition.wait(lk);

  --d_nAvailable;
}
