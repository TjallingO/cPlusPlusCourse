#include "main.ih"

int main(int argc, char const **argv)
{
  constexpr size_t mystNo = 1971962;

  cout << NrTrait<mystNo>::value << '\n'
       << "Even?           " << NrTrait<mystNo>::even  << '\n'
       << "Divisible by 3? " << NrTrait<mystNo>::by3   << '\n'
       << "Width:          " << NrTrait<mystNo>::width << '\n';

}
