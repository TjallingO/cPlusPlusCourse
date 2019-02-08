#include "main.ih"

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
