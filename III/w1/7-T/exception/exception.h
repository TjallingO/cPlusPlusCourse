#ifndef INCLUDED_EXCEPTION_
#define INCLUDED_EXCEPTION_

#include <string>
#include <sstream>
#include <exception>

class Exception: public std::exception
{
  std::string d_what;

  public:
    Exception() = default;

    char const *what() const noexcept(true) override;

    template <typename InputT>
    friend Exception &&operator<<(Exception &&in, InputT anyT);

};

#include "inserterT.h"

#endif
