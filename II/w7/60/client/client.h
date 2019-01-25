#ifndef INCLUDED_CLIENT_
#define INCLUDED_CLIENT_

#include <string>

class Client
{
  std::string d_outputFile;
  size_t d_linenr = 0;

    public:
      Client(std::string outputFile);

      void add();
      std::string loc();

      void run();


    private:
};

#endif
