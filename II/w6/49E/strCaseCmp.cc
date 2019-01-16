#include "main.ih"

string toLower(string toLowerCase)
{
  transform(toLowerCase.begin(), toLowerCase.end(), toLowerCase.begin(),
   ::toupper);
  return toLowerCase;
}
