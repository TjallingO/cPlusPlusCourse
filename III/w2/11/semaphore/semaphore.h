#ifndef INCLUDED_SEMAPHORE_
#define INCLUDED_SEMAPHORE_

#include <mutex>
#include <condition_variable>
#include <utility>
#include "chrono"

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

    bool check(size_t &nAvailable);

    void wait() //for use by producer
    {
      std::unique_lock<std::mutex> lk(d_Mutex);

      while(d_nAvailable == 0)
        d_condition.wait(lk);

      --d_nAvailable;
    }

    template<typename Params> //for use by clients
    bool wait(Params &&params)
    {
      std::unique_lock<std::mutex> lk(d_Mutex);

      while(d_nAvailable == 0)
        d_condition.wait(lk);

      bool result = params();

      if(result == false)
        return false;
      if(result == true && d_nAvailable != 0)
        return true;

      --d_nAvailable;
    }

  private:
};

#endif
