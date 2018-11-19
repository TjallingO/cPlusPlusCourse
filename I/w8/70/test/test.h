#ifndef INCLUDED_TEST_
#define INCLUDED_TEST_


class test
{
  int d_things = 0;

    public:
      //test(); //constructor
      //test(test const &other); // copy constructor

      int rthings() const;

      test(int things);

      //test &operator=(test &&tmp);

      //test(test &&tmp);

    private:

      void things(int number);
};

#endif
