#include "main.ih"


int main(int argc, char const **argv)
{

  if (argc == 3)
  {
    size_t totalIt = stoul(argv[1]);
    size_t threadnr = stoul(argv[2]);

    map<size_t, size_t> supermap;
    mutex wMutex;

    vector<thread> threads;

    for (size_t idx = 0; idx < threadnr; ++idx) {
      threads.push_back(thread(run, ref(supermap),
              (totalIt / threadnr * (0 + idx)) + 1, (totalIt/ threadnr * (1 + idx)), ref(wMutex)));
    }

    for (auto &it: threads)
      it.join();

    // thread t1(run, ref(supermap), 0, mid);
    // thread t2(run, ref(supermap), mid / 2, totalIt);
    //
    // t1.join();
    // t2.join();

    print(supermap);
  }
  else
    cout << "Invalid input. Please enter number of iterations and number of threads to be used.\n";


}
