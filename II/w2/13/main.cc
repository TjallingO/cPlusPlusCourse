#include "main.ih"

int main(int argc, char **argv)
try
{
  test testone(3);
  test testtwo = testone;

  cout << testtwo.counter() << '\n'; //counter is 2 here

  throw(testtwo);  //this throw results in a counter of 4 so 2 more copies
                   //are made. (4 without the rethrowing)
  throw(&testone); //this throw ( if the line above is removed )
                   //results in a counter of 2, so no more copies are made
}


catch (test object)
{
    cout << object.counter() << '\n';
    return 1;
}


catch (test *object)
{
    cout << (*object).counter() << '\n';
    return 1;
}

catch (...)
{
    return 1;
}
