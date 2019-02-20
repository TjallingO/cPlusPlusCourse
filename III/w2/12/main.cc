#include "main.ih"

int main(int argc, char const **argv)
{
  Data myData;
  copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(myData));
  myData.print();
}
