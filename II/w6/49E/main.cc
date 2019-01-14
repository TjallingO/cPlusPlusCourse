#include "main.ih"

#include <numeric> //zal wel niet mogen?

int main(int argc, char const **argv)
{
  vector<Student> vStudents;
  read(string("info.txt"), vStudents);

  writeNames(vStudents);

  sort(
       vStudents.begin(),
       vStudents.end(),
       [](Student left, Student right)
       {
         return toLower(left.lastName()) < toLower(right.lastName());
       }
      );

  writeNames(vStudents);

  vector<size_t> vIndices(vStudents.size());
  iota(vIndices.begin(), vIndices.end(), 0); //zou loopje moeten als numeric
                                             //niet mag

  sort(
       vIndices.begin(),
       vIndices.end(),
       [vStudents](int left, int right)
       {
         return vStudents[left].sNo() < vStudents[right].sNo();
       }
      );

  writeNrs(vStudents, vIndices);
}
