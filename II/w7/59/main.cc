#include "main.ih"

#include <iostream>

int main(int argc, char const **argv)
{
  if (argc != 2)
  {
    cerr << "Invalid number of arguments.";
    return 1;
  }

  Storage myStorage(argv[1]);
  string inputString;

  thread runThread(myStorage.run);

  while (cin >> inputString)
    myStorage.push(inputString);

  myStorage.finished();
  runThread.join();
}
