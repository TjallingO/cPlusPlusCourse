#include "main.ih"

enum nucleoInts charToEnum(char c)  // Returns the enum representation of
{                                 // the four nucleobase options
  switch (c)
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
