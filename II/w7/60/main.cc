#include "main.ih"


int main(int argc, char const *argv[])
{
  Storage warehouse();
  vector<Client> Clients;

  for (size_t idx = 0; idx < argc; ++idx)
    Clients.push_back(Client(argv[idx]));

  for (auto it: Clients)
    thread runThread(&Storage.mememe(it.loc()));

  thread runThread(&Storage::run(), ref(warehouse));
  //while there is more input
  //to be processed adds lines to the queue
  thread printThread(&printlines, ref(warehouse), ref(cin));
  //prints line by line to the file

  runThread.join();
  printThread.join();

}
