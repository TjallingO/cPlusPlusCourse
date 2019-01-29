#ifndef INCLUDED_CLIENT_
#define INCLUDED_CLIENT_

#include "../warehouse/warehouse.ih"

class Client
{
  Warehouse *d_warehouse;
  std::string d_outputFile;
  size_t d_nrlines = 0;

  public:
    Client(Warehouse *warehouse, std::string const &outputFile);

    size_t size();       //returns nr of lines printed
    void printProduct(); //prints strings to file
  private:
};

#endif
