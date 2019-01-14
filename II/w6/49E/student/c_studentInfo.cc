#include "student.ih"

Student::Student(string firstName, string lastName, size_t sNo, double grade)
  : d_name(firstName + lastName), d_lastName(lastName), d_sNo(sNo), d_grade(grade)
{
}
