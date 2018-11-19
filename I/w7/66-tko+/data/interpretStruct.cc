#include "data.ih"

char data::interpretStruct(nucleobase &nB, size_t n)  // From nB, take element n and have
{                                           // enumToChar convert them to char
  switch(n)                                 // and return that char
  {
    case 0:
      return enumToChar(d_nB.nb1);
      break;
    case 1:
      return enumToChar(d_nB.nb2);
      break;
    case 2:
      return enumToChar(d_nB.nb3);
      break;
    case 3:
      return enumToChar(d_nB.nb4);
      break;
    default:
      break;
  }
}
