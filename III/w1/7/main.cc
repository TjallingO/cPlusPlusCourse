#include "main.ih"

<<<<<<< HEAD
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
=======
int main(int argc, char const **argv)
{
  /* code */
>>>>>>> ff624034a9214daa72c3847a8c5040f84fd3cbef
}
