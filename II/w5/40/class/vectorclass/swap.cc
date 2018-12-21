#include "vectorclass.ih"

void VectorClass::swap(VectorClass &other)
{
  d_vWords = vector<string>(other.d_vWords);
}
