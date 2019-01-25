#include "main.ih"

int main(int argc, char const **argv)
{
  Warehouse w1;
  Producer producer(&w1);

  producer.makeProduct("hello");
  producer.makeProduct("bye");

  cout << w1.next() << '\n';
  cout << w1.front() << '\n';
}
