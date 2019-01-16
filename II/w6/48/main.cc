#include "main.ih"

int main(int argc, char const **argv)
{
  vector<size_t> numbers {1, 2, 3, 4, 5, 6, 7};
  // Simple vector of ascending numbers

  copy(numbers.begin(), numbers.end(), ostream_iterator<size_t>(cout, "\n"));
  // Copies the vector to cout, printing them all, new-line seperated

  for_each(
           numbers.begin(),
           numbers.end(),
           [](size_t &nO)
           {
             cout << ++nO << '\n';
           }
          );

  // The same, but now the numbers are incremented in the vector, as well as
  // printed
  // This could not be accomplished with copy
}
