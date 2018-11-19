#include "user.ih"

bool User::valid() const
{
  return  !User::name().empty()  && User::groupId() != 0  &&
   !User::homeDir().empty() &&  !User::realName().empty() &&
   !User::shell().empty()  && User::userId() != 0 ;
}

//Checks whether the object is properly constructed and all the fields
//are filled in.
