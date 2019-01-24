#include "storage.ih"

void Storage::push(istream &input)
{
  while(d_finished)
  {
    string line;
    while(std::getline(input, line)){
      lock_guard<mutex> lk(d_mutex);
      d_queue.push(line);
      d_condition.notify_all();
    }
    finished(input);
  }
}
