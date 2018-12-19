#include "fork.ih"

int Fork::waitForChild() const  // Taken from assignment instruction
{
  int status;
  waitpid(d_pid, &status, 0);
  return WEXITSTATUS(status);
}
