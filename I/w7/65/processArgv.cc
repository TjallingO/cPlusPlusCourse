#include "main.ih"

void enlarge(size_t fp, clOptions &currentStruct)  // Helper function: enlarge
{
  char const **ret = new const char*[fp + 1];

  for (size_t idx = 0; idx != fp; ++idx)
      ret[idx] = currentStruct.filePaths[idx];

  destroy(currentStruct);
  currentStruct.filePaths = ret;
}

struct clOptions processArgv(int argc, char** argv)
{
  clOptions runOptions;
  size_t fp = 0;
  if (argc > 1)
  {
    for (int idx = 1; idx != argc; ++idx)
    {
      if (strcmp(argv[idx], "-a") == 0)
      {
        runOptions.dispAllVars = 1;
        break;
      }
      else
      {
        enlarge(fp, runOptions);
        runOptions.filePaths[fp] = argv[idx];
        ++fp;
      }
    }
  }
  if (!fp)
  {
    enlarge(fp, runOptions);
    runOptions.filePaths[0] = "./pacct.bin";
  }
  return runOptions;
}
