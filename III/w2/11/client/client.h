#ifndef INCLUDED_CLIENT_
#define INCLUDED_CLIENT_

#include "../semaphore/semaphore.h"
#include <queue>

class Client
{
  Semaphore &d_filled;
  Semaphore &d_available;

  bool &d_finished;

  public:

  static bool s_continue;

  public:
    Client(Semaphore &filled, Semaphore &available,
    bool &finished);

    static bool check();

    void function(size_t &counter);
    void process(std::queue<size_t> &itemQueue);

  private:
    void print(size_t const &item);
};




#endif
