#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

#include <vector>
#include <iterator>

template <typename Data>
class Storage
{
  std::vector<Data *> d_storage;


  public:
    Storage(Data input);

    class iterator: public std::iterator<std::forward_iterator_tag, Data>
    {
      iterator(): i(0){};
      iterator(int i): i(i){};
      using value_type = Data;
      using iterator_category = std::forward_iterator_tag;
      using difference_type = std::ptrdiff_t;
      friend class Storage;
      public:
        iterator &operator++();
        Data &operator*(){ return (*d_storage)[i]; };
        Data *operator->();
        bool operator==(iterator const &other);
        bool operator!=(iterator const &other);

      private:
        int i;
    };

};
//
// inline Data iterator::&operator*()
//
//
// inline iterator iterator::&operator++()
// {
//   ++i;
//   return *this;
// }
//
// inline Data iterator::*operator->()
// {
//   return &((*d_data)[i])
// }
//
// inline bool iterator::operator==(iterator const &other)
// {
//   return i == other.i;
// }
//
// inline bool iterator::operator!=(iterator const &other)
// {
//   return i != other.i;
// }
//
//

#endif
