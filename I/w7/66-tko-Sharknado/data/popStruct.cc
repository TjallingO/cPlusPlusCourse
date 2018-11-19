#include "data.ih"

void Data::popStruct(nucleobase &nB, char ch, size_t idx)
{                    // Populate element n within struct nB, calling enumChar
  switch(idx)        // on the passed char first
  {
    case 0:
      nB.nb1 = charToEnum(ch);
      break;
    case 1:
      nB.nb2 = charToEnum(ch);
      break;
    case 2:
      nB.nb3 = charToEnum(ch);
      break;
    case 3:
      nB.nb4 = charToEnum(ch);
      break;
    default:
      break;
  }
}
