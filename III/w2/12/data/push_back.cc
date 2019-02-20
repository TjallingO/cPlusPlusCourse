#include "data.ih"

void Data::push_back(string anyInput)
{
  d_data.push_back( make_shared<string>(anyInput) );
}
