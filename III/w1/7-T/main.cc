#include "main.ih"

int main(int argc, char **argv)
try
{
  size_t exSizet = 5;

  throw Exception{} << "insert anything that's ostream-insertable: "
                    << "strings" << ", values "
                    << exSizet << " etc., etc." << argc;
}

catch (exception const &ex)
{
  cout << ex.what() << '\n';
}
