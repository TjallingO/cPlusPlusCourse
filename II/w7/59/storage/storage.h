#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

#include <string>
#include <queue>
#include <mutex>
#include <atomic>

class Storage
{
  public:
    Storage(std::string outputFile);
    void push(std::string const string);
    void pop();
    std::string front();
    bool empty() const;
    std::string next();
    void finished();
    void run();

  private:
    std::queue<std::string> d_stQueue;
    std::mutex d_storageMutex;
    std::atomic<bool> d_finished = false;
    std::string d_outputFile;
};

inline void Storage::push(std::string const string)
{
  std::lock_guard<std::mutex> mx(d_storageMutex);
  d_stQueue.push(string);
}

inline void Storage::pop()
{
  std::lock_guard<std::mutex> mx(d_storageMutex);
  d_stQueue.pop();
}

inline std::string Storage::front()
{
  std::lock_guard<std::mutex> mx(d_storageMutex);
  return d_stQueue.front();
}

inline bool Storage::empty() const
{
  return d_stQueue.empty();
}

inline std::string Storage::next()
{
  std::string returnString = this->front();
  this->pop();
  return returnString;
}

inline void Storage::finished()
{
  d_finished = true;
}

#endif
