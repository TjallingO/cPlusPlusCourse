#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

#include <queue>
#include <string>
#include <vector>
#include <mutex>
#include <condition_variable>

class Storage
{


  std::mutex              d_mutex;
  std::queue<std::string> d_queue;
  bool                    d_finished = false;

  public:
    class Client
    {
      std::string d_outputFile;
      size_t nrlines = 0;
      std::mutex wMutex;
      std::condition_variable cv;

      public:
          Client(std::string outputFile);

          void Clienttakes();


      private:

    };
  private:
    std::vector<Client>     d_clients;


  public:
    Storage();  // Constructor based on filename

    bool         empty();
    std::string  next();
    void         push(std::string const line);
    std::string &front();
    void         finished();
    //void         run();

    void         addClient(std::string outputFile);


};

#endif
