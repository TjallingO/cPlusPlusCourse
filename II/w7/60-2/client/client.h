#ifndef INCLUDED_CLIENT_
#define INCLUDED_CLIENT_

#include <fstream>

class Client
{
    std::string d_outputFile;
    size_t d_linenr = 0;
    mutex wMutex;
    storage *warehouse;
    condition_variable condition;

  public:
    Client(std::string outputFile, &warehouse);

    string getLine();


  private:
};

#endif
