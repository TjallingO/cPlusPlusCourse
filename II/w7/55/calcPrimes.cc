#include "main.ih"

void calcPrimes(size_t noPrimes, bool &calcDone, vector<size_t> &primes)
{
  size_t next = 3;

  while (primes.size() < noPrimes)
  {
    bool isPrime = none_of(
                           primes.begin(),
                           primes.end(),
                           [&](auto el)
                           {
                             return next % el == 0;
                           }
                          );
    if (isPrime)
      primes.push_back(next);
    ++next;
  }
  calcDone = true;
}
