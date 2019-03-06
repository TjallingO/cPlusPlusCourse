#include "main.ih"

#include <vector>

int main()
{
  using IVect = vector<int>;
  IVect iv1(10, 4);        // IVect: vector<int>
  IVect iv2(10, 3);
  IVect iv3(10, 2);
  IVect iv4(10, 1);

  IVect iResult { iv1 * (iv2 + iv3) / iv4 };

  using DVect = vector<double>;
  DVect dv1(10, 4.1);     // DVect: vector<double
  DVect dv2(10, 3.1);
  DVect dv3(10, 2.1);
  DVect dv4(10, 1.1);

  DVect dResult { dv1 * (dv2 + dv3) / dv4 };
}
