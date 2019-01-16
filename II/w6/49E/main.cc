#include "main.ih"


int main(int argc, char const **argv)
{
  vector<Student> vStudents;
  read(string(argv[1]), vStudents); //reading input from file

  sortByName(vStudents);            //sorting by name

  writeNames(vStudents);            //printing sorted vector with names

  vector<size_t> vIndices(vStudents.size());
  iota(vIndices.begin(), vIndices.end(), 0); //filling indices with values
                                             //0,1,...,n where n is the last
                                             //element

  sortByNr(vStudents, vIndices);             //sorting by student number

  writeNrs(vStudents, vIndices);             //printing student number and
                                             //grade
}
