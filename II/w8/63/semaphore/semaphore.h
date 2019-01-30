#ifndef INCLUDED_SEMAPHORE_
#define INCLUDED_SEMAPHORE_

#include <mutex>
#include <condition_variable>

class Semaphore
{
  size_t d_nAvailable;
  std::mutex d_Mutex;
  std::condition_variable d_condition;

  public:
    Semaphore(size_t nAvailable);

    void notify();
    void notify_all();

    size_t size() const;
    void wait();

  private:
};

#endif
