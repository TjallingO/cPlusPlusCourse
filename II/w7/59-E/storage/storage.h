#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

#include <queue>
#include <string>
#include <mutex>

class Storage
{
  std::mutex              d_mutex;
  std::queue<std::string> d_queue;
  bool                    d_finished = false;
  std::string             d_outputFile;

  public:
    Storage(std::string outputFile);  // Constructor based on filename

    bool         empty();
    std::string  next();
    void         push(std::string const line);
    std::string &front();
    void         finished();
    void         run();
};

#endif
