#ifndef INCLUDED_TEST_
#define INCLUDED_TEST_


class test
{
  int d_things = 0;

    public:
      //test(int things); //constructor
      test(test const &other); // copy constructor

      int rthings() const;

    private:

      void things(int number);
};

#endif
