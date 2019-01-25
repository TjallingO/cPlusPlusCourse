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
  bool d_finished = false;
  std::string d_outputFile;

  public:
    Storage();

    bool empty();
    std::string next();
    void push(std::string const line);
    std::string &front();
    void finished();
    void run(std::string file);

    void mememe(std::string filename);

  private:
};

#endif
