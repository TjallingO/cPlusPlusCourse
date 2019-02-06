#include "main.ih"

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
