#ifndef INCLUDED_WAREHOUSE_
#define INCLUDED_WAREHOUSE_

#include <queue>
#include <string>
#include <mutex>
#include <condition_variable>

class Warehouse
{
  std::queue<std::string> d_queue;
  std::mutex wMutex;
  std::condition_variable condition;

  public:
    Warehouse();

    void addProduct(std::string line);

    std::string &front();
    std::string next();



  private:
};

#endif
