#ifndef INCLUDED_INTVALUE_
#define INCLUDED_INTVALUE_

class IntValue: public Base<IntValue>
{
  private:
    int d_myIValue;

  public:
    std::ostream &insertInto(std::ostream &out)
    {
      return out << d_myIValue << '\n';
    };

    IntValue() = delete;
    IntValue(int input)
      : d_myIValue(input)
    {
    };
};

#endif
