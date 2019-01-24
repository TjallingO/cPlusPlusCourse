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
  std::string d_outputFile;

  public:
    Storage(std::string outputFile);

    bool empty();
    std::string next();
    void push(std::string const line);
    std::string &front();
    std::string getobject();
    void finished();
    void run();


  private:
};

#endif
