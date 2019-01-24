#include "main.ih"

int main(int argc, char const **argv)
{
  if (argc != 2)  // Conditional exit
  {
    cerr << "Please specify the number of primes to compute \n";
    return 0;
  }

  bool calcDone = false;      // Done calculating?
  // Only written to and read by one thread at a time: no atomic or mutex needed

  vector<size_t> primes{ 2 }; // Vector of primes, primed with '2'

  auto startChrono = chrono::system_clock::now();
  time_t start = chrono::system_clock::to_time_t(startChrono);
  // Starting time

  size_t noPrimes = stoi(argv[1]);
  // Number of primes to calculate

  thread dottingThread(dotting, 1, ref(calcDone));
  // Start the dotting
  thread primesThread(calcPrimes, noPrimes, ref(calcDone), ref(primes));
  // Start the calculating

  primesThread.join();
  dottingThread.join();
  // Waiting for both to be done

  cout << '\n';
  for (auto el: primes)
    cout << el << ' ';
  // Output primes

  auto endChrono = chrono::system_clock::now();
  time_t end = chrono::system_clock::to_time_t(endChrono);
  // End time

  chrono::duration<double> elapsed_seconds = endChrono - startChrono;
  // Duration calculation

  cout << "\nStarting time: " << ctime(&start)
       << "Ending time:   " << ctime(&end)
       << "Computation of " << stoi(argv[1]) << " primes took "
                            << elapsed_seconds.count() << " seconds";
  // Output timing
}
