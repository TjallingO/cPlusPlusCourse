#include "main.ih"

#include <numeric> //zal wel niet mogen?

int main(int argc, char const **argv)
{
  vector<Student> vStudents;
  read(string(argv[1]), vStudents);

  sortByName(vStudents);

  writeNames(vStudents);

  vector<size_t> vIndices(vStudents.size());
  iota(vIndices.begin(), vIndices.end(), 0); //zou loopje moeten als numeric
                                             //niet mag
  sortByNr(vStudents, vIndices);

  writeNrs(vStudents, vIndices);
}
