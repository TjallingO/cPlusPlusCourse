#include "filter.ih"

void Filter::display() const
{
    size_t size = d_lines.size();          // get number and contents
    string const *str = d_lines.data();

                                        // print fm first non empty through
                                        // last non empty
    for (size_t index = firstNonEmpty(size, str),
                end = beyondLastNonEmpty(size, str);
            index != end;
                ++index
    )
        cout << str[index] << '\n';

}
