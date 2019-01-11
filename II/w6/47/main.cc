#include <algorithm>
#include <iostream>
#include <iterator>

using namespace std;

int main(int argc, char **argv)
{
  sort(
       argv, argv + argc,
       [](char *left, char *right) // Sort ascending
       {
         return *left < *right;
       }
      );
  copy(argv, argv + argc, ostream_iterator<string>(cout, " ")); // Print

  cout << '\n'; // New line

  sort(
       argv,
       argv + argc,
       [](char *left, char *right) // Sort descending
       {
         return *left > *right;
       }
      );
  copy(argv, argv + argc, ostream_iterator<string>(cout, " ")); // Print
}
