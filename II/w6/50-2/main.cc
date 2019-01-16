#include "main.ih"

//#include <set>

void read_lines(std::istream &is, vector<string> &dest)
{
  std::copy(std::istream_iterator<Line>(is), std::istream_iterator<Line>(),
   inserter(dest, dest.begin()));
}

int main(int argc, char **argv)
{
  vector<string> vs;
  read_lines(cin, vs);

  for(auto it: vs)
    cout << it << '\n';
}
