#include "main.ih"


int main(int argc, char **argv)
{

  User me ; //constructing object me

  cout << "valid\t\t" << (me.valid() ? "true" : "false") << '\n';

  if (me.valid())
    cout << "name\t\t" << me.name() << '\n'
     << "groupId\t\t" << me.groupId() << '\n'
     << "homeDir\t\t" << me.homeDir() << "/\n"
     << "realName\t" << me.realName() << '\n'
     << "shell\t\t" << me.shell() << '\n'
     << "userId\t\t" << me.userId() << '\n';


}
