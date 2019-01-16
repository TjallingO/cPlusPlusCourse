#include "line.ih"

istream &operator>>(istream &is, Line &line)
{
  return getline(is, line);
}
