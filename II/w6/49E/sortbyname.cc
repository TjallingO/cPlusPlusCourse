#include "main.ih"

void sortByName(vector<Student> &vStudents)
{
  sort(
       vStudents.begin(),
       vStudents.end(),
       [](Student left, Student right)
       {
         return toLower(left.lastName()) < toLower(right.lastName());
       }
      );
}
