#include "main.ih"
#include <vector>
#include <algorithm>
#include <functional>



int main(int argc, char **argv)
{
  // arg1 number rvalues
  // arg 2 max rv to generate
  // arg 3 lookup value

  int nrRvalues = stoi(argv[1]);
  int maxRvalue = stoi(argv[2]);
  int lookupVal = stoi(argv[3]);

  vector<int> numbers;
  int test = 3;

  for (size_t idx = 0; idx < nrRvalues; ++idx)
    numbers.push_back(random() % (maxRvalue + 1)); //adding a random number
                                                    //between 0 and max_rvalue

  for (auto idx: numbers)
    cout << idx << '\t';

  cout << '\n';

  //if ( find(numbers.begin(), numbers(end), lookupVal) != numbers.end())
  //find_if( numbers.begin(), numbers.end(), (greater_equal<int>(), lookupVal));

  size_t counter = 0;
  bool boolloop = true;

  for (auto idx: numbers)
  {
    if (idx >= lookupVal)
    {
      cout << "The first value exceeding " << lookupVal << " is at index "
      << counter << '\n';
      boolloop = false;
      break;
    }
    else
    {
      ++counter;
    }
  }

  if (boolloop == true)
  {
    cout << "No random value exceeds " << lookupVal << '\n';
  }



  //if found: The first value exceeding ... is at index ...
  //else No random value exceeds ...
}
