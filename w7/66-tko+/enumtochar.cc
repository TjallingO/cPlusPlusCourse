#include "main.ih"

char enumToChar(int nucEnum)
{
  switch (nucEnum)
    {
      case A:
        return 'A';
        break;
      case C:
        return 'C';
        break;
      case T:
        return 'T';
        break;
      case G:
        return 'G';
        break;
      default:
        break;
    }
}
