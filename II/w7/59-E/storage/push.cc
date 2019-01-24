#include "storage.ih"

void Storage::push(string line)
{
  while(true){
    lock_guard<mutex> lk(d_mutex);
    d_queue.push(line);
    d_condition.notify_all();
  }
}
