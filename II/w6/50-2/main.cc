#include "main.ih"

void operator>>(istream &istr, vector<string> &dest)
{
  std::copy(std::istream_iterator<Line>(istr), std::istream_iterator<Line>(),
   inserter(dest, dest.begin()));
}

int main(int argc, char **argv)
{
  vector<string> vs;

  cin >> vs;

  for (auto it: vs)
    cout << it << '\n';
}

/*
If we had used to use istream &operator>>(std::istream &istr, std::string &str)
rather than std::istream &operator>>(std::istream & is, Line &line)
(in line.h) then we would have extracted individual words rather than lines.
This is due to how istream_iterator<string> iterating works. It would use the
extraction operator to a string which is coded this way. By instead using
a istream_iterator<Line> we can create our own extraction operator which
returns lines instead of words.
*/
