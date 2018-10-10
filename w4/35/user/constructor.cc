// Programming in C/C++
// Week 4: Assignment 35
// Tjalling Otter & Emiel Krol
// Constructor

#include "user.ih"

User::User()
{
  struct passwd *pwd = getpwuid(1000); //Putting the user data in the struct

  if  ((*pwd).pw_name == 0)  //checking if this user exists and we dont have a null deref
    return;

  d_pw_name = (*pwd).pw_name;        //Setting the values of the newly constructed object.
  d_pw_passwd = (*pwd).pw_passwd;
  d_pw_uid = (*pwd).pw_uid;
  d_pw_gid = (*pwd).pw_gid;
  d_pw_gecos =  (*pwd).pw_gecos;
  d_pw_dir =  (*pwd).pw_dir;
  d_pw_shell = (*pwd).pw_shell;
};
