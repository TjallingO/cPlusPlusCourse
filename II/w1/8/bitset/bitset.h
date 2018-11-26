#ifndef INCLUDED_BITSET_
#define INCLUDED_BITSET_

#include <string>

class BitSet
{
    public:
        class BitMemory
        {

          friend class BitSet;

          private:
              size_t d_length;
              size_t *memory_t;

          public:
              size_t get_length();
              BitMemory();
              ~BitMemory();




          private:
              void length(std::string input);
              void memory(std::string input);

              void destroy();

        };

    private:
        BitMemory d_bits;

    public:
        BitSet(std::string input);
        void swap(BitSet &other);

        void print();

    private:
};

inline size_t BitSet::BitMemory::get_length()
{
  return d_length;
}

inline void BitSet::BitMemory::length(std::string input)
{
  d_length = input.length();
}



#endif
