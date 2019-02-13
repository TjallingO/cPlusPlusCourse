#include "main.ih"

#include <iostream>

int main(int argc, char const **argv)
{
  Storage storage = {1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

  cout << storage[Icmp::ID]         << '\n'
       << storage[TcpUdp::PROTOCOL] << '\n'
       << storage[12]               << '\n'
       //<< storage['a']              << '\n' // Does work, but out of range
       << storage[12.5]             << '\n';
}
