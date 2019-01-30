#include "semaphore.ih"

void Semaphore::notify()
{
  lock_guard<mutex> lk(d_Mutex);
  if (d_nAvailable++ == 0)
    d_condition.notify_one();
}
