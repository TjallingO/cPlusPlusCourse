#include "charcount.ih"

CharCount::Action CharCount::locate(size_t *destIdx, char ch)
{
    size_t uCh = static_cast<unsigned char>(ch);

    for (size_t idx = 0; idx != d_info.nChar; ++idx)
    {
        size_t value = static_cast<unsigned char>(
                                d_info.ptr[idx].ch
                            );

        if (uCh > value)
            continue;

        *destIdx = idx;

        return uCh == value ?
                    ADD
                :
                    INSERT;
    }

    return APPEND;                    // append at the end
}
