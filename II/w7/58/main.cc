#include "main.ih"

#include <thread>
#include <fstream>

int main(int argc, char const **argv)
{
  if (argc != 3)
  {
    cerr << "Invalid argument.";
    return 1;
  }

  string inputString = argv[2];

  {
    Handler wordHandler;
    ofstream myfile (argv[1]);
    thread thread1(execShift, ref(wordHandler), ref(myfile), ref(inputString));
    thread1.join();
  }
  {
    ofstream myfile (argv[1]);
    thread thread2(defShift, ref(myfile), ref(inputString));
    thread2.join();
  }
}
