#ifndef INCLUDED_HANDLER_
#define INCLUDED_HANDLER_

#include <iosfwd>
#include <string>

class Handler
{
  public:
    void shift(std::ostream &out, std::string const &text);

  private:
};

#endif