#include <iostream>
#include <string>
#include <algorithm>  //for std::generate_n
#include <random>


using namespace std;

std::string random_string(std::string::size_type length)
{
    static auto& chrs = "0123456789"
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    thread_local static std::mt19937 rg{std::random_device{}()};
    thread_local static std::uniform_int_distribution<std::string::size_type> pick(0, sizeof(chrs) - 2);

    std::string s;

    s.reserve(length);

    while(length--)
        s += chrs[pick(rg)];

    return s;
}


int main(int argc, char *argv[])
{
  size_t d_capacity = 1;
  size_t d_size = 2;
  size_t d_blocks = 0;
  string **pointerStringArray;

  {string *temp = static_cast<string *>(operator new(100000 * sizeof(string)));
  for (size_t idx = 100000; idx--; )
    new (temp + idx) string{random_string(10)};

  pointerStringArray[d_blocks] = temp;}
  ++d_blocks;

  {string *temp2 = static_cast<string *>(operator new(100000 * sizeof(string)));
  for (size_t idx = 100000; idx--; )
    new (temp2 + idx) string{random_string(10)};
  pointerStringArray[d_blocks] = temp2;}
  ++d_blocks;


  std::cerr << pointerStringArray[0][9] << '\n';
  std::cerr << pointerStringArray[1][0] << '\n';
  for (size_t index = 0; index != 11; ++index)
    std::cerr << *(*(pointerStringArray) + index) << '\n';
  //
  // for (size_t index = 0; index != d_blocks * 10; ++index)
  //   (*)*(pointerStringArray)) + index).~string();
}
