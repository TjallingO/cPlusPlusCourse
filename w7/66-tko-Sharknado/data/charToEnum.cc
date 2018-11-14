#include "data.ih"

enum Data::nucleoInts Data::charToEnum(char ch)
{ // Returns the enum representation of the four nucleobase options
  switch (ch)
    {
      case 'A':
        return A;
        break;
      case 'C':
        return C;
        break;
      case 'T':
        return T;
        break;
      case 'G':
        return G;
        break;
      default:
        break;
    }
}
