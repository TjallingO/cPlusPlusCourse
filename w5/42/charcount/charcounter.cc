#include "charcount.ih"

void CharCount::CharCounter(std::istream& stream)
{

  size_t n = 255;
  for  (size_t index = 0; index < n; ++index)
  {
    stream.clear();
    stream.seekg(0);
    size_t count = 0;

    char ascII = index;
    while  (stream.get() != EOF)
    {
      if  (stream.get() == ascII)
      {
        ++count;
      }
    }
    CharObject[index].ch = ascII;
    CharObject[index].count = count;

    //string stringOutput = string(CharObject[index].ch);
/*
    if  (CharObject[index].ch == ' ' && CharObject[index].count != 0)
      cout << " " << ":" << '\t' << CharObject[index].count << '\t' << index << '\n';
    if  (CharObject[index].ch == '\t' && CharObject[index].count != 0)
      cout << "\\t" << ":" << '\t' << CharObject[index].count << '\t' << index << '\n';
    if (CharObject[index].ch == '\n' && CharObject[index].count != 0)
      cout << "\\n" << ":" << '\t' << CharObject[index].count << '\t' << index << '\n';
    if (CharObject[index].ch != ' ' && CharObject[index].ch != '\n' && CharObject[index].ch != '\t' && CharObject[index].count != 0)
    cout << CharObject[index].ch << '\t' << CharObject[index].count << '\t' << index << '\n';
    */
  }
}
