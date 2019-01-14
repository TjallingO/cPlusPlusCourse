#include "main.ih"

void sortByNr(vector<Student> &vStudents, vector<size_t> &vIndices)
{
  sort(
       vIndices.begin(),
       vIndices.end(),
       [vStudents](int left, int right)
       {
         return vStudents[left].sNo() < vStudents[right].sNo();
       }
      );
}
