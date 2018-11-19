#include <iostream>
#include <string>

using namespace std;

size_t d_capacity = 0;
size_t d_size = 0;
string **pPstrings = 0;

void destroy()
{
  delete[] pPstrings;
};

void d_tor()
{
  for (size_t index = 0; index != d_size; ++index)
    delete pPstrings[index];
  destroy();
}

string** rawPointers(size_t nPointers)
{
  return (new string*[nPointers]);
};

void reserve(size_t newCapacity)
{
  while (d_capacity < newCapacity)
  {
    size_t oldcapacity = d_capacity;
    if (d_capacity == 0)
      d_capacity = 1;
    else
      d_capacity *= 2;

    string **tmp = rawPointers(d_capacity);
    for (size_t idx = 0; idx != oldcapacity; ++idx)
      tmp[idx] = pPstrings[idx];

    destroy();
    pPstrings = tmp;
  }
};

void add(string &newString)
{
  if(d_size + 1 > d_capacity)
    reserve(d_size + 1);
  pPstrings[d_size] = new std::string{ newString };
  ++d_size;
};

void resize(size_t newSize, string newAddition = "")
{
  if (newSize > d_size)
    for (size_t index = 0; index != newSize - d_capacity; ++index)
      add(newAddition);

  if (newSize < d_size)
    for (size_t index = d_size; index != newSize - 1; index--)
      delete pPstrings[index];

  d_size = newSize;
}

int main()
{
  for (size_t idx = 0; idx != 1000; ++idx)
  {
    string newString = "hello";
    add(newString);
  }
  string newString = "hello";
  //resize(100, newString);
  cerr << d_size;
  d_tor();
}
