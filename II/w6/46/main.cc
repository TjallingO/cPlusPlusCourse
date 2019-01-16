#include "main.ih"
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>



int main(int argc, char **argv)
{
  int nrRvalues = stoi(argv[1]);
  int maxRvalue = stoi(argv[2]);
  int lookupVal = stoi(argv[3]);

  vector<int> numbers;

  for (size_t idx = 0; idx < nrRvalues; ++idx)
    numbers.push_back(random() % (maxRvalue + 1)); //adding a random number
                                                   //between 0 and max_rvalue
  for (auto idx: numbers)
    cout << idx << '\t';
  cout << '\n';

//manier 1
  int upbound = *find(numbers.begin(), numbers.end(), lookupVal + 1);
  auto it =
  find(numbers.begin(), numbers.end(), upbound);
  cout << "The first value exceeding " << lookupVal << " is at index "
  << distance(numbers.begin(), it)  << '\n';

//manier 2, hier met lambda
  auto it2 = find_if(
                     numbers.begin(),
                     numbers.end(),
                     [lookupVal](const int & val)
                     {
                       if (val > lookupVal)
                         return true;
                       return false;
                     }
                    );

  if (it2 != numbers.end())
    cout << "The first value exceeding " << lookupVal << " is at index "
         << distance(numbers.begin(), it2) << '\n';
  else
    cout << "No random value exceeds " << lookupVal << '\n';

}
