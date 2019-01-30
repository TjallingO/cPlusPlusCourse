#include "semaphore.ih"

void Semaphore::notify_all()
{
  //all waiting thread(wait member) is notified reactivating that thread
  //only one waiting thread will be able to obtain the semaphore;s lock
  //and to reduce available and that particular thread is thereupon reactivated.
  lock_guard<mutex> lk(d_Mutex);
  if (d_nAvailable++ == 0)
    d_condition.notify_all();
}
