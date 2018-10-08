// Programming in C/C++
// Week 4: Assignment 35
// Tjalling Otter & Emiel Krol
// Constructor

#include "user.ih"

user::user()
{
  struct passwd *pwd;

  pwd = getpwuid(1000); //Putting the user data in the struct

  string strname((*pwd).pw_name);   //converting char arrays to strings.
  string strpass((*pwd).pw_passwd);
  string strgecos((*pwd).pw_gecos);
  string strdir((*pwd).pw_dir);
  string strshell((*pwd).pw_shell);

  pw_name = strname;        //Setting the values of the newly constructed object.
  pw_passwd = strpass;
  pw_uid = (*pwd).pw_uid;
  pw_gid = (*pwd).pw_gid;
  pw_gecos =  strgecos;
  pw_dir =  strdir;
  pw_shell = strshell;
};
