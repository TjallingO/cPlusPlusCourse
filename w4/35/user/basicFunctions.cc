// Programming in C/C++
// Week 4: Assignment 35
// Tjalling Otter & Emiel Krol
//basic user functions

#include "user.ih"

string user::name() const
{
  return pw_name;
}

size_t user::groupId() const
{
  return pw_gid;
}

string user::homeDir() const
{
  return pw_dir + '/';
}

string user::realName() const
{
  return pw_gecos;
}

string user::shell() const
{
  return pw_shell;
}

size_t user::userId() const
{
  return pw_uid;
}
