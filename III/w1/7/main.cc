#include "main.ih"

int main(int argc, char **argv)
try
{
  size_t x = 5;

  throw Exception{} << "insert anything that's "
          "ostream-insertable: " << "strings" << ", values " <<
          x << " etc., etc.";
          //argc ipv werkt wel
}

catch (exception const &ex)
{
    cout << ex.what() << '\n';
}
