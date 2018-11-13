#include "data.ih"

char data::interpretStruct(nucleobase &nB, size_t n)  // From nB, take element n and have
{                                           // enumToChar convert them to char
  switch(n)                                 // and return that char
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
