#include "main.ih"

void addtomap(map<size_t, size_t> &supermap, map<size_t, size_t> const &smallmap)
{
  supermap = accumulate(smallmap.begin(), smallmap.end(), supermap,
    [](map<size_t, size_t> &tmpMap, const pair<const size_t, size_t> &tmpPair)
    {
      return (tmpMap[tmpPair.first] += tmpPair.second, tmpMap);
    } );
}
