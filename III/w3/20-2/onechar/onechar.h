#ifndef INCLUDED_ONECHAR_
#define INCLUDED_ONECHAR_

template<char character>
class OneChar
{
  char d_Cptr = character;


  public:
    char CP()
    {
      return d_Cptr;
    }
  private:
};

#endif
