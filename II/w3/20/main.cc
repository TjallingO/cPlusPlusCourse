#include "main.ih"

int main(int argc, char **argv)
try
{
  cout << "Derived test1:\n";
  Derived test1;
  cout << "\nDerived test2(test1):\n";
  Derived test2(test1);
  cout << "\nDerived test3(&&test2):\n";
  Derived test3(move(test2));



  //DDerived test2;

  //test2.value2();

  //test1.halve();
  //test1.recompute();


}
catch (...)
{
    return 1;
}
