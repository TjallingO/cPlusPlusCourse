#include "main.ih"

#include <map>
#include <iostream>

#define LINT unsigned long long int

LINT fib(size_t number, map<LINT, LINT> &fibMap)
{
  if (fibMap.find(number) != fibMap.end())
    return fibMap[number];
  else
  {
    LINT value = fib(number - 2, fibMap) + fib(number - 1, fibMap);
    fibMap[number] = value;
    return value;
  }
}

int main(int argc, char const **argv)
{
  map<LINT, LINT> fibMap;
  fibMap[1] = 1;
  fibMap[2] = 1;
  size_t f;
  while (true)
  {
    cout << "\n> fib ";
    cin >> f;
    if (f == 1337)
      for (auto elem : fibMap)
        cout << elem.first << '\t' << elem.second << '\n';
      else
        cout << fib(f, fibMap) << '\n';
  }
}
