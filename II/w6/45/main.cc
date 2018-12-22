#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>
#include <string>

using namespace std;

int main(int argc, char const **argv)
{
  set<string> iStrings;

  cout << "Please enter delimited words to be sorted, end input with ^D \n";

  copy(
       istream_iterator<string>(cin),
       istream_iterator<string>(),
       inserter(iStrings,iStrings.end())
      );

  // Or: set<string> iStrings((istream_iterator<string>(cin)),
  //                          istream_iterator<string>());

  copy(
       iStrings.begin(),
       iStrings.end(),
       ostream_iterator<string>(cout, " ")
      );
}
