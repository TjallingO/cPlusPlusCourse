// User: constructor

#include "user.ih"

User::User()
{
  struct passwd *pwd = getpwuid(1000); //Putting the user data in the struct

  if  ((*pwd).pw_name == 0)  //checking if this user exists
    return;                  // and we dont have a null deref

  d_pw_name = (*pwd).pw_name;         //Setting the values of the
  d_pw_passwd = (*pwd).pw_passwd;     //newly constructed object.
  d_pw_uid = (*pwd).pw_uid;
  d_pw_gid = (*pwd).pw_gid;
  d_pw_gecos =  (*pwd).pw_gecos;
  d_pw_dir =  (*pwd).pw_dir;
  d_pw_shell = (*pwd).pw_shell;
};
