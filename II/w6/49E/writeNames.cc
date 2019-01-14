#include "main.ih"

void writeNames(vector<Student> const &vStudents)
{
  for(auto idx: vStudents)
  {
    idx.printName();
  }
  cout << '\n';
}
