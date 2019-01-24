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

  //thread thr1(getlines, ref(cin), ref(warehouse));
  //thread thr2(printlines, ref(warehouse));
  thread runThread(&Storage::run, ref(warehouse));
  thread printThread(&printlines, ref(warehouse), ref(cin));


  runThread.join();
  printThread.join();
}
