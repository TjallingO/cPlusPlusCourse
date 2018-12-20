#include "main.ih"

int main(int argc, char const **argv)
{
  string inputString;               // Strings extracted from cin
  multiset<string> sortedStrings;   // Multiset orders with repeats

  cout << "Please enter delimited words to be sorted, end input with ^D \n";

  while(cin >> inputString)         // Input
    sortedStrings.insert(sortedStrings.begin(),inputString);

  cout << "\nSorted input: \n";
                                    // Output
  for (auto idx = sortedStrings.begin(); idx != sortedStrings.end(); ++idx)
  	std::cout << *idx << ' ';
}
