#include "main.ih"

template<class Out>
void read_lines(std::istream &is, Out dest)
  {
    typedef std::istream_iterator<Line> InIt;
    std::copy(InIt(is), InIt(), dest);
  }


int main(int argc, char **argv)
{
  vector<string> vs;
  read_lines(cin, back_inserter(vs));

  for(auto it: vs)
    cout << it << '\n';

}
