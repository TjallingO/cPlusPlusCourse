#include "main.ih"

void popStruct(nucleobase &nB, char c, size_t n)
{
  switch(n)
  {
    case 0:
      nB.nb1 = enumChar(c);
      break;
    case 1:
      nB.nb2 = enumChar(c);
      break;
    case 2:
      nB.nb3 = enumChar(c);
      break;
    case 3:
      nB.nb4 = enumChar(c);
      break;
    default:
      break;
  }
}
