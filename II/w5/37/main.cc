#include "main.ih"

int main(int argc, char const **argv)
{
  string inputString;               // Strings extracted from cin
  multiset<string> sortedStrings;   // Multiset orders with repeats

  cout << "Please enter delimited words to be sorted, end input with ^D \n";

  while(cin >> inputString)         // Input
    sortedStrings.insert(sortedStrings.begin(),inputString);

  cout << "\nSorted input: \n"
       << "String \t\tCount \n";
                                    // Output
  for (const auto &word: sortedStrings)
  	std::cout << word << "\t\t" << sortedStrings.count(word) << '\n';
}
