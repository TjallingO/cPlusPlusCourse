#include "main.ih"


string *factory(string const &str, size_t count)
{
  drstring o_dstr = drstring(str, count);
  string tmp ;
  //return new string = (o_dstr.get_string());
  return new string tmp = o_dstr.get_string();
}






int main(int argc, char **argv)
try
{

  string str = " hello ";
  string *str2 = factory(str, 10);

  cout << str2[2] << '\n';



}
catch (...)
{
    return 1;
}
