#ifndef INCLUDED_USER_
#define INCLUDED_USER_

#include <string>
#include <sys/types.h>
#include <pwd.h>

class User
{
    std::string   d_pw_name;       // username
    std::string   d_pw_passwd;     // user password
    uid_t         d_pw_uid;        // user ID
    gid_t         d_pw_gid;        // group ID
    std::string   d_pw_gecos;      // user information
    std::string   d_pw_dir;        // home directory
    std::string   d_pw_shell;      // shell program

    public:
      User();
      bool valid() const;
      size_t groupId() const;
      bool inGroup(size_t gid) const;
      std::string const &name() const;
      std::string const &homeDir() const;
      std::string const &realName() const;
      std::string const &shell() const;
      size_t userId() const;

};

inline std::string const &User::name() const
{
  return d_pw_name;
}

inline size_t User::groupId() const
{
  return d_pw_gid;
}

inline std::string const &User::homeDir() const
{
  return d_pw_dir;
}

inline std::string const &User::realName() const
{
  return d_pw_gecos;
}

inline std::string const &User::shell() const
{
  return d_pw_shell;
}

inline size_t User::userId() const
{
  return d_pw_uid;
}



#endif
