#ifndef INCLUDED_FORK_
#define INCLUDED_FORK_

#include <cstdlib>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

class Fork
{
  private:
    pid_t d_pid;

  public:
    void fork();

  private:
    virtual void parentProcess() = 0; // Pure virtual functions
    virtual void childProcess()  = 0;

  protected:
    int waitForChild() const;
    pid_t pid() const;
};

#endif

inline pid_t Fork::pid() const
{
  return d_pid;
}
