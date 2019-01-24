#include "storage.ih"

void Storage::finished(istream &input)
{
  d_finished = input.eof();
}
