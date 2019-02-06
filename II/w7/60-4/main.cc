#include "main.ih"

int main(int argc, char const **argv)
{
  Warehouse warehouse;

  vector<Client> clients;

  for (size_t idx = 1; idx < argc; ++idx)
    clients.emplace_back( warehouse, argv[idx]);
//adding clients to the clients vector

  vector<thread> threads;

  for (auto &client: clients)
    threads.emplace_back(&Client::printProduct, ref(client));

  thread addThread(&Warehouse::addlines, ref(warehouse));
  //thread that adds lines to the queue

//adding a thread that takes lines from the queue in the warehouse and prints
//it in the file corresponding to the client.

  addThread.join();  //joining threads

  for (auto &it: threads)
    it.join();

  for (auto client: clients)  //printing nr of lines per file
    cout << client.size() << '\n';

}
