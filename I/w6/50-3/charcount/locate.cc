#include "charcount.ih"

CharCount::Action CharCount::locate(size_t *destIdx, char ch)
{
    size_t uCh = static_cast<unsigned char>(ch); //converts the current char to
    //an unsigned char such that the objects are sorted in the desired order

    for (size_t idx = 0; idx != d_info.nChar; ++idx)
    {
        size_t value = static_cast<unsigned char>(
                                d_info.ptr[idx].ch
                            ); //as above to compare the stored chars in the
                               //Char Objects to the current char

        if (uCh > value) //if current char is greater continue to the next
            continue;    //stored Char object

        *destIdx = idx;  //otherwise we now know where to insert the new Char
                         //object
        return uCh == value ?
                    ADD       //if it is equal it already exists and we
                :             //want to add 1 to the Char Objects char counter.
                    INSERT;   //otherwise we want to insert the new Char Object
    }                         //at the current index

    return APPEND;            // if no value greater than the current chars
                              //value is found we want to append the new Char
                              //Object to the Char Object array.
}
