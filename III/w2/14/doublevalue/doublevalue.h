#ifndef INCLUDED_DOUBLEVALUE_
#define INCLUDED_DOUBLEVALUE_

class DoubleValue: public Base<DoubleValue>
{
  private:
    double d_myDValue;

  public:
    std::ostream &insertInto(std::ostream &out)
    {
      return out << d_myDValue << '\n';
    };

    DoubleValue() = delete;
    DoubleValue(double input)
      : d_myDValue(input)
    {
    };
};

#endif
