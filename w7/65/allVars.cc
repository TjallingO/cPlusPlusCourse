#include "main.ih"

bool allVars(int argc, char const** argv)
{
  bool dispAllCodes = 0;
  if (argc > 1)
    for (int idx = 0; idx != argc; ++idx)
      if (strcmp(argv[idx], "-a") == 0)
      {
        dispAllCodes = 1;
        break;
      }
  return dispAllCodes;
}
