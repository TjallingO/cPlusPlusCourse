#include <iostream>
#include <string>
#include <algorithm>  //for std::generate_n
#include <random>
#include <memory>

using namespace std;


// Copy-paste string generator; not important
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
  size_t d_size = 0;
  size_t d_blocks = 0;
  size_t blockCap = 10;
  string **pointerStringArray = 0;

  {
    string *newMemory = static_cast<string *>(
      operator new(blockCap * sizeof(string)));

    *(pointerStringArray + d_blocks) = newMemory;
    ++d_blocks;
  }
  {
    string newString = random_string(12);
    for (size_t index = 0; index != blockCap; ++index)
      new (pointerStringArray + d_size + index) std::string{ newString };
    d_size += blockCap;
  }
  {
    string *newMemory = static_cast<string *>(
      operator new(blockCap * sizeof(string)));

    *(pointerStringArray + d_blocks) = newMemory;
    ++d_blocks;
  }
  {
    string newString = random_string(12);
    for (size_t index = 0; index != blockCap; ++index)
      new (pointerStringArray + d_size + index) std::string{ newString };
    d_size += blockCap;
  }

  for (size_t row = 0; row != d_blocks ; ++row)
    for (size_t col = 0; col != blockCap; ++col)
      pointerStringArray[row][col].~string();
  operator delete(pointerStringArray);
}
