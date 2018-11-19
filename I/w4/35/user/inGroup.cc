#include "user.ih"

bool User::inGroup(size_t gid) const
{
  return gid == d_pw_gid; //checking whether gid is equal to the pw_gid field
}
