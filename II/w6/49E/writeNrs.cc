#include "main.ih"

void writeNrs(vector<Student> vStudents, vector<size_t> vIndices)
{

  for (size_t idx = 0; idx < vIndices.size(); ++idx)
    vStudents[vIndices[idx]].printNr();
  
  cout << '\n';
}
