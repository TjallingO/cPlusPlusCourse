#include "main.ih"

int main(int argc, char **argv)
{
  clOptions runOptions = processArgv(argc, argv);

  for (int idx = 0; runOptions.filePaths[idx] != 0; ++idx)
  {
    printAccts(idx, runOptions);
  }
  destroy(runOptions);
}
