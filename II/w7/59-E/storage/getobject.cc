#include "storage.ih"

string Storage::getobject()
{
  //cout << "getobject\n";
  unique_lock<mutex> ul(d_mutex);
  while (this -> empty())
  {
    //cout << "getobject 2\n";
    d_condition.wait(ul);
  }
  //cout << "getobject 3\n";
  return this -> next();
}
