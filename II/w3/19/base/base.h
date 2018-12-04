#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_


class Base
{
      double d_data = 4;

    public:
      double value () const;
      static void msg();

    protected:
      void halve();

    private:
      void recompute();
};

#endif
