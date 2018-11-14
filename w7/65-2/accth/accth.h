#ifndef INCLUDED_ACCTH_
#define INCLUDED_ACCTH_

#include <fstream>
#include <cstddef>
#include <iostream>
#include <cstring>
#include <asm/types.h>
#include <sys/acct.h>
#include <iomanip>
#include <csignal>

class acctH
{

  public:

    char const *defaultPath = "./pacct.bin";

    struct clPars
    {
      bool allExits = 0;
      size_t nFiles = 0;
      char const **filePaths = 0;
    };

    acctH(int argc, char const **argv);
    void processFiles();

  private:
    clPars d_clPars;
    void processArgv();
    void printAcct(acct_v3 &acct);
    std::string exitcode(__u32 exitcode);
    bool popAcct(acct_v3 &acct, std::ifstream &stream);
    void processBin(std::ifstream &stream);

};

#endif
