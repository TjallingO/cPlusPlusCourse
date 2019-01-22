#include "main.ih"

void prime(bool &done)
{
  vector<size_t> vs {2};
  size_t next = 3;
  size_t nrPrimes = 30000;

  while(vs.size() < nrPrimes)
  {
    if(find_if(vs.begin(), vs.end(),
      [&next](const size_t &val)
      {
        if (next%val == 0)
           return true;
        else return false;

      }) == vs.end())
    {
      vs.push_back(next);
    }
    ++next;
  }

  for(auto it: vs)
    cout << it << ' ';

  cout << '\n';

  done = true;
}

void dots(bool &done)
{
  using namespace std::chrono_literals;

  while(!done)
  {
    std::this_thread::sleep_for(1s);
    std::cout << ".";
  }
}

int main(int argc, char **argv)
{
  bool done = false;

  thread thr(prime, ref(done));
  thread thr2(dots, ref(done));

  thr.join();
  thr2.join();
}
