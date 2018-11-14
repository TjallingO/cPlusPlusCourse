#include "accth.ih"

acctH::acctH(int argc, char const **argv)
:
  d_clPars( clPars{0, static_cast<size_t>(argc), argv} )
{
  processArgv();
  d_clPars.filePaths[0] = defaultPath;
}
