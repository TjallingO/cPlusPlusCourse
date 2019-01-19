#include "main.ih"

#include <vector>
#include <iostream>
#include <chrono>
#include <thread>
#include <algorithm>

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

void dotting(size_t seconds, bool &calcDone)
{
  while (!calcDone)
  {
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
    cerr << '.';
  }
}

int main(int argc, char const **argv)
{
  bool calcDone = false;
  vector<size_t> primes{ 2 };

  if (argc != 2)
  {
    cerr << "Please specify the number of primes to compute \n";
    return 0;
  }
  auto startChrono = chrono::system_clock::now();
  time_t start = chrono::system_clock::to_time_t(startChrono);

  size_t noPrimes = stoi(argv[1]);

  thread dottingThread(dotting, 1, ref(calcDone));
  thread primesThread(calcPrimes, noPrimes, ref(calcDone), ref(primes));

  primesThread.join();
  dottingThread.join();

  cout << '\n';
  for (auto el: primes)
    cout << el << ' ';

  auto endChrono = chrono::system_clock::now();
  time_t end = chrono::system_clock::to_time_t(endChrono);
  chrono::duration<double> elapsed_seconds = endChrono - startChrono;

  cout << "\nStarting time: " << ctime(&start)
       << "Ending time:   " << ctime(&end)
       << "Computation of " << stoi(argv[1]) << " primes took "
                            << elapsed_seconds.count() << " seconds";
}
