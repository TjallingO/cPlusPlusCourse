#include "main.ih"

int main(int argc, char const **argv)
{
  vector<Student> vStudents;
  read(string("info.txt"), vStudents);
  sort(
       vStudents.begin(),
       vStudents.end(),
       [](Student left, Student right)
       {
         return toLower(left.lastName()) < toLower(right.lastName());
       }
      );

  cout << vStudents[0].sNo();

  vector<Student*> vIndices;
  for (auto el: vStudents)
    vIndices.push_back(&el);

  sort(
       vIndices.begin(),
       vIndices.end(),
       [](Student *left, Student *right)
       {
         return left -> sNo() < right -> sNo();
       }
      );

  cout << vIndices[0] -> sNo();
}
