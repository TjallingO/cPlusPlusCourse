#include "user.ih"

bool user::inGroup(size_t gid) const
{
  if (gid == pw_gid) //checking whether gid is equal to the pw_gid field
    return true;    //of the constructed object.
  else
    return false;
}
