#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <vector>
#include <memory>
#include <string>

class Data
{
  typedef std::vector<std::shared_ptr<std::string>> DataVector;
  DataVector d_data;

  public:
    typedef std::string value_type;           // Needs to be public
    void push_back(std::string stringInput);  // Custom push_back for back_ins.
    void print() const;                       // Just for testing
};

#endif
