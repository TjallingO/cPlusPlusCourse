#include "main.ih"

#include <algorithm>
#include <iostream>
#include <future>
#include <chrono>

void qqsort(int *beg, int *end)
 {
     if (end - beg <= 1)
         return;

     int lhs = *beg;
     int *mid = std::partition(beg + 1, end,
         [&](int arg)
         {
             return arg < lhs;
         }
       );

     std::swap(*beg, *(mid - 1));

     auto fut1 = async(std::launch::async, qqsort, beg, mid);
     auto fut2 = async(std::launch::async, qqsort, mid, end);

     std::this_thread::sleep_for(std::chrono::seconds(2));

     fut1.get();
     fut2.get();

 }


int main(int argc, char const **argv)
try
{
  int ia[5] = {3,2,1,7,4};

  qqsort(ia, ia + sizeof(ia)/sizeof(int));

  for (auto &i: ia)
  {
    std::cout << i << '\n';
  }

}
catch(...)
{
  std::cout << "haHA caught one!\n";
}
