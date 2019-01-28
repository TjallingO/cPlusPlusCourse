#include "main.ih"

int main(int argc, char const **argv)
{
  Warehouse warehouse;

  vector<Client> clients;

  for (size_t idx = 1; idx < argc; ++idx)
    clients.push_back(Client(&warehouse, argv[idx]));

  thread addThread(&addlines, ref(warehouse), ref(cin));

  vector<thread> threads;
/*
  for (size_t idx = 0; idx < clients.size(); ++idx)
    threads.push_back(thread(&Client::printProduct, clients[idx]));
*/
  for (auto client: clients)
    threads.push_back(thread(&Client::printProduct, client));

  for (auto &it: threads)
    it.join();

  addThread.join();

  //printProduct.join();
  //c2.printProduct();
//  cout << w1.next() << '\n';
//  cout << w1.front() << '\n';
}
