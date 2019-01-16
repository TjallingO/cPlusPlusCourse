#include "main.ih"

void read_lines(std::istream &is, vector<string> &dest)
{
  std::copy(std::istream_iterator<Line>(is), std::istream_iterator<Line>(), dest.end());
}

int main(int argc, char **argv)
{
  vector<string> vs;
  read_lines(cin, vs);

  for(auto it: vs)
    cout << it << '\n';
}
