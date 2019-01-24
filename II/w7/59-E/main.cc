#include "main.ih"
void printlines(Storage &warehouse, istream &input)
{
  string inputString;
  while (cin >> inputString)
    warehouse.push(inputString);

  warehouse.finished();
}

int main(int argc, char const *argv[])
{
  Storage warehouse(argv[1]);

  thread runThread(&Storage::run, ref(warehouse)); //while there is more input
  //to be processed adds lines to the queue
  thread printThread(&printlines, ref(warehouse), ref(cin));
  //prints line by line to the file

  runThread.join();
  printThread.join();
}
