#ifndef INCLUDED_VECTORCLASS_
#define INCLUDED_VECTORCLASS_

#include <vector>
#include <set>
#include <string>

class VectorClass
{
  private:
    std::vector<std::string> d_vWords;

  public:
    VectorClass() = default;
    VectorClass(char const *filename);
    void swap(VectorClass &other);
    size_t size() const;
    size_t capacity() const;
    void add(std::string const &newWord);
};

#endif

inline size_t VectorClass::size() const
{
  return d_vWords.size();
}

inline size_t VectorClass::capacity() const
{
  return d_vWords.capacity();
}

inline void VectorClass::add(std::string const &newWord)
{
  d_vWords.push_back(newWord);
}
