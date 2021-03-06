#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iosfwd>

class CharCount
{
  enum Action
    {
        APPEND = 0,
        INSERT = 1,
        ADD = 2
    };

    public:
        struct Char
        {
            char ch;
            size_t count;
        };

        struct CharInfo
        {
            Char *ptr;
            size_t nChar;
        };


    private:

        size_t d_cap = 255; //maximum size since no more ASCII values possible
        size_t d_size = 8;  //starting size

        CharInfo d_info =
        {
          static_cast<CharCount::Char *>(
          operator new(d_size * sizeof(CharCount::Char)))
          , 0
        };

        //allocating raw memory block for the array of Char Objects


    public:
        size_t count(std::istream &in);
        CharInfo const &info() const;
        ~CharCount(); //defining destructor so that the used memory is
                      //freed at the end of main.

    private:
        void process(char ch);
        //calls locate and then the appropriate action
        //(append, insert or add)
        Action locate(size_t *idx, char ch);
        //locates the index of the current char and returns the appropriate
        //action
        void append(char ch, size_t idx); // inserts char at nChar
        void insert(char ch, size_t idx); // inserts char at index
                                          // and calls transfer

        void add(char ch, size_t idx);
                                          //increases count by 1 of already
                                          //existing char object
        void transfer(Char *dest, size_t begin, size_t end);
        //moves all chars from begin to an index 1 higher, starting at the
        //highest index
        void enlarge(); //allocates a new raw block of memory, twice the size
                        //of the previous memory
        void destroy();
                        //frees the memory of the Char objects and afterwards
                        //the memory used by the pointer itself.

        CharCount::Char rawCapacity() const;

        //returns the current raw capacity

        static void (CharCount::*s_action[])(char ch, size_t idx);

        //declares the array of pointers so it can reach private member
        //functions (add, insert, append)
};

inline CharCount::CharInfo const &CharCount::info() const
{
    return d_info; //returns a reference to charinfo object
}

inline CharCount::Char CharCount::rawCapacity() const
{
    return *(d_info).ptr; //returns current raw capacity
}

inline CharCount::~CharCount()
{
  destroy();  //destructor
}


#endif
