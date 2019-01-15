#include "myclass.ih"

istream &operator>>(istream &istr, vector<string> &vs)
{
  //string line;
  //while (getline(istr, line))
  //  vs.push_back(line);


  copy(istream_iterator<string>(istr), istream_iterator<string>(),
        back_inserter(vs));

}
