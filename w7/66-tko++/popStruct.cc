#include "main.ih"

void popStruct(nucleobase &nB, char c, size_t n)  // Populate element n within
{                                                 // struct nB, calling enumChar
  switch(n)                                       // on the passed char first
  {
    case 0:
      nB.nb1 = charToEnum(c);
      break;
    case 1:
      nB.nb2 = charToEnum(c);
      break;
    case 2:
      nB.nb3 = charToEnum(c);
      break;
    case 3:
      nB.nb4 = charToEnum(c);
      break;
    default:
      break;
  }
}
