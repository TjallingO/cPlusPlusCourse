#include "main.ih"

#include <vector>
#include <iostream>
#include <chrono>

void isPrime(size_t &next, vector<size_t> &primes)
{
  for (auto el: primes)
  {
    if ( (next % el) == 0 )
    {
      ++next;
      return;
    }
  }
  primes.push_back(next);
  ++next;
}

void dotting()
{
}

int main(int argc, char const **argv)
{
  auto startChrono = chrono::system_clock::now();
  time_t start = chrono::system_clock::to_time_t(startChrono);

  dotting();
  vector<size_t> primes{ 2 };
  size_t next = 3;

  while (primes.size() != stoi(argv[1]))
    isPrime(next, primes);

  auto endChrono = chrono::system_clock::now();
  time_t end = chrono::system_clock::to_time_t(endChrono);
  chrono::duration<double> elapsed_seconds = endChrono - startChrono;

  for (auto el: primes)
    cout << el << ' ';

  cout << "\nStarting time: " << ctime(&start)
       << "Ending time:   " << ctime(&end)
       << "Computation of " << stoi(argv[1]) << " primes took "
                            << elapsed_seconds.count() << " seconds";
}
