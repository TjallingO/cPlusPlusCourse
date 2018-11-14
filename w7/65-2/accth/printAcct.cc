#include "accth.ih"

void acctH::printAcct(acct_v3 &acct)
{                      // Loop through bin file
    if (d_clPars.allExits || acct.ac_exitcode) // If exitcode = 0 or if -a
    {       // Print the processes
      std::cout << setw(20) << left << acct.ac_comm
                << setw(10) << left << exitcode(acct.ac_exitcode) << '\n';
    }
}
