#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
  size_t nrRvalues = stoi(argv[1]);
  size_t maxRvalue = stoi(argv[2]);
  size_t lookupVal = stoi(argv[3]);

  vector<size_t> numbers;

  for (size_t idx = 0; idx < nrRvalues; ++idx)
    numbers.push_back(random() % (maxRvalue + 1)); //adding a random number
                                                   //between 0 and max_rvalue
  for (auto idx: numbers)
    cout << idx << '\t';
  cout << '\n';

  auto it = find_if(
                     numbers.begin(),
                     numbers.end(),
                     [lookupVal](const size_t & val)
                     {
                       if (val > lookupVal)
                         return true;
                       return false;
                     }
                    );

  if (it != numbers.end())
    cout << "The first value exceeding " << lookupVal << " is at index "
         << distance(numbers.begin(), it) << '\n';
  else
    cout << "No random value exceeds " << lookupVal << '\n';

}
