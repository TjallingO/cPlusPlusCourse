#include "data.ih"

char Data::interpretStruct(nucleobase &nB, size_t idx)  // From nB, take element n and have
{                                           // enumToChar convert them to char
  switch(idx)                                 // and return that char
  {
    case 0:
      return enumToChar(nB.nb1);
      break;
    case 1:
      return enumToChar(nB.nb2);
      break;
    case 2:
      return enumToChar(nB.nb3);
      break;
    case 3:
      return enumToChar(nB.nb4);
      break;
    default:
      break;
  }
}
