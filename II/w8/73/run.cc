#include "main.ih"

void run(map<size_t, size_t> &supermap, size_t start, size_t end, mutex &wMutex)
{
  map<size_t, size_t> fourDistr;

  __uint128_t highest = end;
  size_t length = 0;
  size_t powFour = 0;
  size_t HighestPowFour = 0;

  for (__uint128_t idx = start; idx < end; ++idx)
  {
    powFour = collatz(idx, highest, length);
    if(powFour != 0)
      fourDistr[powFour]++;
    if (powFour > HighestPowFour)
      HighestPowFour = powFour;
  }

  cout << setw(15) << start << " .. " << setw(10) << end << setw(15) << " -> output\n";

  lock_guard<mutex> lk(wMutex);
  addtomap(supermap, fourDistr);



  // cout << "highest power of four: " << HighestPowFour << '\t'
  //      << "highest val: " << highest << '\t'
  //      << "highest length: " << length << '\n';
  //
  // for (auto it = fourDistr.begin(); it != fourDistr.end(); ++it)
  //   cout << it->first << ' ' << it->second << '\n';


}
