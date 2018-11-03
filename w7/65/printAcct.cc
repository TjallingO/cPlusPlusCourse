#include "main.ih"

void printAccts(size_t idx, clOptions runOptions)
{
  std::ifstream dFile(runOptions.filePaths[idx], std::ios::binary); // Open bin file
  cout << runOptions.filePaths[idx] << '\n';  // Display filename

  for (size_t index = 0; index != numStructs(runOptions.filePaths[idx]); ++index)
  {                                  // Loop through bin file
    struct acct_v3 acct;  // Define new struct
    populateAcct(acct, dFile);  // Populate that struct from the ifstream file
    if (runOptions.dispAllVars || acct.ac_exitcode) // If exitcode = 0 or if -a
    {       // Print the processes
      cout  << setw(20) << left << acct.ac_comm
            << setw(10) << left << exitcode(acct.ac_exitcode) << '\n';
    }
  }
}
