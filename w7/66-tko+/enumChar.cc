#include "main.ih"

enum nucleoInts enumChar(char c)
{
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
