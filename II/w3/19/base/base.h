#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_


class Base
{

      double d_data = 4;

    public:
      double value () const;

    protected:
      void halve();

    private:
      void recompute();
};

#endif
