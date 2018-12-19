#include "fork.h"

void Fork::fork()
{
  if ( (d_pid = ::fork()) == -1 )     // In case fork() fails
    throw "System fork() failed \n";

  if (d_pid == 0)
  {                     // Hence, child process
    childProcess();
    exit(1);            // Bad practice, but must stop
  }

  parentProcess();
}
