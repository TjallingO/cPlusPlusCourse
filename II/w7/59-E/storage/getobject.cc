#include "storage.ih"

string Storage::getobject()
{
  unique_lock<mutex> ul(d_mutex);
  while (this -> empty())
    d_condition.wait(ul);

  return this -> next();
}
