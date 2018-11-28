#include "main.ih"

void show(Strings const &str, size_t from, size_t to)
{
    for (; from != to; ++from)
        cout << str[from] << '\n';
}

int main()
{
    Strings str{ environ };

    cout << "The 5th environment definition: " << str[4] << "\n"
            "The 4th character of that definition: " << str[4][3] << '\n';

    show(str, 0, 4);            // show 4 strings
}
