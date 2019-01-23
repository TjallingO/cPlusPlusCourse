#include "main.ih"

#include <iostream>

int main(int argc, char const **argv)
{
  if (argc != 2)
  {
    cerr << "Invalid number of arguments.";
    return 1;
  }

  cout << "Enter delimited words, end input with ^D \n";

  Storage myStorage(argv[1]);

  thread runThread(&Storage::run, ref(myStorage));

  string inputString;
  while (cin >> inputString)
    myStorage.push(inputString);

  myStorage.finished();
  runThread.join();
}
