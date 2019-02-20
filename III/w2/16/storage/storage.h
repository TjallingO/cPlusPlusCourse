#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

template <typename Data>
class Storage
{
  std::vector<Data *> d_storage;

  public:
    class iterator: public std::iterator<std::forward_iterator_tag, Data>
    {
      friend class Data;
      public:
        iterator &operator++();
        Data &operator*();
        Data *operator->();
        bool operator==(iterator const &other);
        bool operator!=(iteratr const &other);
    };

};

#endif
