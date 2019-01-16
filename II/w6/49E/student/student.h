#ifndef INCLUDED_STUDENT_
#define INCLUDED_STUDENT_

#include <string>

class Student
{

    std::string d_name;
    std::string d_lastName;
    size_t      d_sNo;
    double      d_grade;

  public:
    Student(std::string firstName, std::string lastName, size_t sNo, double grade);
    size_t sNo() const;
    std::string lastName();
    void printName();
    void printNr();

};

#endif

inline size_t Student::sNo() const
{
  return d_sNo;
};

inline std::string Student::lastName()
{
  return d_lastName;
};
