#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <vector>
#include <memory>

class Data
{
  typedef std::vector<std::shared_ptr<std::string>> DataVector;

  DataVector d_data;

  public:

    void add(std::shared_ptr<std::string> newlineptr);
  private:
};

void Data::add(std::shared_ptr<std::string> newlineptr)
{
  d_data.push_back(newlineptr);
}

#endif
