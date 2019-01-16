#include "student.ih"


void Student::printName()
{
  cout << left << setw(25) << d_name << setw(25) << d_lastName << setw(25)
       << d_sNo << setw(25) << d_grade << '\n';
}
