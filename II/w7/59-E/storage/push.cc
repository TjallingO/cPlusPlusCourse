#include "storage.ih"

void Storage::push(istream &input)
{
  d_finished = true;
  string line;

  while(getline(input, line) && d_finished)
  {
    //cout << "push\n";  
    this -> add(line);
    finished(input);
    //cout << "push2\n";
  }
}
