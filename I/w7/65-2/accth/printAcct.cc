#include "accth.ih"

void AcctH::printAcct(acct_v3 const &acct)
{                                              // Loop through bin file
    if (d_clPars.allExits || acct.ac_exitcode) // If exitcode != 0 or if -a,
    {                                          // print the process exits
      std::cout << setw(20) << left << acct.ac_comm
                << setw(10) << left << formExit(acct.ac_exitcode) << '\n';
    }
}
