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

    std::string &front(); //returns string that has been in queue the longest

    bool empty(); //checks whether queue is empty

    std::string getProduct(); //used by clients to retrieve a string from
                              // the queue

    bool isitfinished(); //checks if there is more input to come

    void addlines(); //processes input to queue and calls finished when there
                     //is no more input

  private:
    std::string next(); //removes and returns string from queue
    void addProduct(std::string const &line); //adds a string to the queue
    void finished(); //sets d_finished to true and notifies all waiting

};

#endif
