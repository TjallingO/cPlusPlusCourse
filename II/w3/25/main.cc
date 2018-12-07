#include "main.ih"


string *factory(string const &str, size_t count)
{
  /*
    string *tmp = new string[count];
    for (size_t idx = 0; idx < count; ++idx)
      tmp[idx] = str;
    return tmp;
    */
    cerr << "fac\n";
    return new drstring(str, count);
}






int main(int argc, char **argv)
try
{

  string str = " hello ";
  //string *str_ptr = factory(str, 10);

  cout << factory(str, 10) << '\n';
  /*
  string str = " hello ";
  string *str2 = factory(str ,10);
  for (size_t idx = 0; idx < 10; ++idx)
    cout << str2[idx] << '\n';

  for (size_t idx = 0; idx < 10; ++idx)
    str2[idx].~string();

  delete str2;
  */


}
catch (...)
{
    return 1;
}
