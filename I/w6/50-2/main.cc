#include "main.ih"

int main(int argc, char **argv)
{
  CharCount charObject(std::cin);
  showChar(charObject);
  cout << "Capacity is " << charObject.capacity() << '\n';
}
