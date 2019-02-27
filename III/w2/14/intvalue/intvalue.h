#ifndef INCLUDED_INTVALUE_
#define INCLUDED_INTVALUE_

class IntValue: public Base<IntValue>
{
  private:
    int d_myValue;

  public:
    std::ostream &insertInto(std::ostream &out)
    {
      return out << d_myValue;
    };

    IntValue() = delete;
    IntValue(int input)
    : d_myValue(input)
    {
    };
};

#endif
