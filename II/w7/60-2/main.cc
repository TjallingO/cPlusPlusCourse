#include "main.ih"


int main(int argc, char const *argv[])
{
  Storage warehouse(argv[1]);

  thread runThread(&Storage::run, ref(warehouse)); //while there is more input
  //to be processed adds lines to the queue
  thread printThread(&addlines, ref(warehouse), ref(cin));
  //prints line by line to the file

  runThread.join();
  printThread.join();
}
