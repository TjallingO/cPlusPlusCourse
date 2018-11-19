// Acct handler

#ifndef INCLUDED_ACCTH_
#define INCLUDED_ACCTH_

#include <iosfwd>

#include <asm/types.h>  // __u32, unsigned int
#include <sys/acct.h>   // acct_v3

class AcctH
{

  public:
    char const *defaultPath = "/var/log/account/pacct";  // Default file to use

    AcctH(int argc, char const **argv); // Constructor
    void processFiles();                // Process input files

  private:
    struct clPars                       // Command-line option struct
    {
      bool allExits = 0;                // Display all exits (-a)
      size_t nFiles = 0;                // Number of input files
      char const **filePaths = 0;       // Array of filepaths
    };

    clPars d_clPars;                                    // Struct data member
    void processArgv(size_t argc);                      // Process argc/argv
    void processBin(std::ifstream &stream);             // Process binary file
    bool popAcct(acct_v3 &acct, std::ifstream &stream); // Populate acct struct
    void printAcct(acct_v3 const &acct);                // Print acct struct
    std::string formExit(__u32 exitcode);               // Format exit code
};

#endif
