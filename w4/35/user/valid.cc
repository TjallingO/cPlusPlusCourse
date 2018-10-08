#include "user.ih"

bool user::valid() const
{
  if ( !user::name().empty()  && user::groupId() != 0  && !user::homeDir().empty() &&
   !user::realName().empty() && !user::shell().empty()  && user::userId() != 0 )
  return true;
  else
  return false;
}

//Checks whether the object is properly constructed and all the fields
//are filled in.
