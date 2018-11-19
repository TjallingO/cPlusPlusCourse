#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iosfwd>

class CharCount
{
  enum capacities
  {
    MAXSIZE = 255, //maximum size since no more ASCII values possible
    STARTSIZE = 8, //a very small file might only contain one word
  };               //in which case 8 seperate ASCII values might be enough

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

        size_t d_max = MAXSIZE;
        size_t d_cap = STARTSIZE;

        CharInfo d_info =
        {
          static_cast<CharCount::Char *>(
          operator new(d_cap * sizeof(CharCount::Char)))
          , 0
        };

        //allocating raw memory block for the array of Char Objects

        static void (CharCount::*s_action[])(char ch, size_t idx);

        //declares the array of pointers so it can reach private member
        //functions (add, insert, append)

    public:
        ~CharCount(); //defining destructor so that the used memory is
                      //freed at the end of main.
        size_t count(std::istream &in);
        CharInfo const &info() const;
        size_t const capacity() const;


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

        CharCount::Char *rawCapacity() const;
        //returns a pointer to newly created Char Objects which is actually a
        //pointer to a raw block of memory



};

inline CharCount::CharInfo const &CharCount::info() const
{
    return d_info; //returns a reference to charinfo object
}

inline CharCount::Char *CharCount::rawCapacity() const
{
    return static_cast<CharCount::Char *>(
    operator new(d_cap * sizeof(CharCount::Char)));
}
//returns a pointer to newly created Char objects which is actually a pointer
//to raw memory

inline size_t const CharCount::capacity() const
{
    return d_cap;
}


#endif
