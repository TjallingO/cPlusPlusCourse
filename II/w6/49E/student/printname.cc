#include "student.ih"

void Student::printName()
{
  cout << d_name << '\t' << d_lastName << '\t' << d_sNo << '\t'
       << d_grade << '\n';
}
