#include "main.ih"


istream &operator>>(istream &istr, vector<string> &dest)
{
  std::copy(std::istream_iterator<Line>(istr), std::istream_iterator<Line>(),
   inserter(dest, dest.begin()));
}

int main(int argc, char **argv)
{
  vector<string> vs;

  cin >> vs;

  for(auto it: vs)
    cout << it << '\n';
}
