#include "data.ih"

void data::popStruct(char c, size_t n)  // Populate element n within
{                                                 // struct nB, calling enumChar
  switch(n)                                       // on the passed char first
  {
    case 0:
      d_nB.nb1 = charToEnum(c);
      break;
    case 1:
      d_nB.nb2 = charToEnum(c);
      break;
    case 2:
      d_nB.nb3 = charToEnum(c);
      break;
    case 3:
      d_nB.nb4 = charToEnum(c);
      break;
    default:
      break;
  }
}
