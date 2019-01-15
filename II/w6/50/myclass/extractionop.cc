#include "myclass.ih"

istream &operator>>(istream &istr, vector<string> &vs)
{
  //string line;
  //while (getline(istr, line))
  //  vs.push_back(line);



  copy(istream_iterator<string>(istr), istream_iterator<string>(),
      back_inserter(vs));

/*
  copy(istream_iterator<string>(istr), istream_iterator<string>(),
        [vs, istr]()
      {
        string line;
        getline(istr, line);
        return line;
      }
    );*/
/*
    sort(
         vIndices.begin(),
         vIndices.end(),
         [vStudents](int left, int right)
         {
           return vStudents[left].sNo() < vStudents[right].sNo();
         }
        );
  */
}
