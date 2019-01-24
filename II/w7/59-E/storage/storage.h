#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

#include <queue>
#include <string>
#include <condition_variable>
#include <mutex>


class Storage
{
  std::mutex d_mutex;
  std::queue<std::string> d_queue;
  std::condition_variable d_condition;

  public:
    Storage();

    bool empty();
    std::string next();
    void push(std::string line);
    std::string &front();
    std::string getline();


  private:
};

#endif
