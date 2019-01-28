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
  bool d_finished = false;

  public:
    Warehouse();

    std::string &front();

    bool empty();

    std::string getProduct();

    bool isitfinished();

    void addlines();

  private:
    std::string next();
    void addProduct(std::string const &line);
    void finished();

};

#endif
