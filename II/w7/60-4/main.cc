#include "main.ih"

int main(int argc, char const **argv)
{
  Warehouse warehouse;

  vector<Client> clients;

  for (size_t idx = 1; idx < argc; ++idx)
    clients.push_back(Client(&warehouse, argv[idx]));
//adding clients to the clients vector

  thread addThread(&Warehouse::addlines, ref(warehouse));
//thread that adds lines to the queue

  vector<thread> threads;

  for (auto &client: clients)
    threads.push_back(thread(&Client::printProduct, ref(client)));

//addings a thread that takes lines from the queue in the warehouse and prints
//it in the file corresponding to the client.


  for (auto &it: threads)
    it.join();

  addThread.join();  //joining threads

  for (auto client: clients)  //printing nr of lines per file
    cout << client.size() << '\n';

}
