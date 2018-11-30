#ifndef INCLUDED_TEST_
#define INCLUDED_TEST_


class test
{
        inline static int s_counter = 0;

        int d_value = 0;

    public:
        test();
        test(int value);
        test(test &copy);

        static int counter();
        int value();

    private:
};

#endif
