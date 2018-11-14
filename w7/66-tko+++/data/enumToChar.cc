#include "data.ih"

char Data::enumToChar(int nucEnum)  // Take the passed enum (int), and return its
{                             // associated character
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
