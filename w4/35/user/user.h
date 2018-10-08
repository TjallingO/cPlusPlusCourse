#ifndef INCLUDED_USER_
#define INCLUDED_USER_

#include <string>
#include <iostream>
#include <sys/types.h>
#include <pwd.h>
#include <sstream>

class user
{
    std::string   pw_name;       // username
    std::string   pw_passwd;     // user password
    uid_t         pw_uid;        // user ID
    gid_t         pw_gid;        // group ID
    std::string   pw_gecos;      // user information
    std::string   pw_dir;        // home directory
    std::string   pw_shell;      // shell program

    public:
      user();
      bool valid()                           const;
      size_t groupId()                       const;
      bool inGroup(size_t gid)               const;
      std::string name()                     const;
      std::string homeDir()                  const;
      std::string realName()                 const;
      std::string shell()                    const;
      size_t userId()                        const;
    private:

};

#endif
