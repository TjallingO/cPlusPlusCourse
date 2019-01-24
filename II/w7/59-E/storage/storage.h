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
  bool d_finished = false;

  public:
    Storage();

    bool empty();
    std::string next();
    void push(std::istream &input);
    std::string &front();
    std::string getline();
    void finished(std::istream &input);


  private:
};

#endif
