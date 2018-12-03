#include "main.ih"

int main(int argc, char **argv)
try
{

  Derived test1;

  cout << test1.value2() << '\n';
  //test1.halve();
  //test1.recompute();


}
catch (...)
{
    return 1;
}
