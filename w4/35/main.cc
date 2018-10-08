#include "main.ih"


int main(int argc, char **argv)
{

  user me ; //constructing object me

  cout << "name\t\t" << me.name() << '\n';
  cout << "groupId\t\t" << me.groupId() << '\n';
  cout << "homeDir\t\t" << me.homeDir() << '\n';
  cout << "realName\t" << me.realName() << '\n';
  cout << "shell\t\t" << me.shell() << '\n';
  cout << "userId\t\t" << me.userId() << '\n';

  cout << "valid\t\t" << (me.valid() ? "true" : "false") << '\n';


}
