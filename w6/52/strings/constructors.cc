#include "strings.ih"

Strings::Strings()
:
    d_size(0),
    d_str(0)
{}

Strings::Strings(int argc, char *argv[])
:
    d_size(argc),
    d_str(new string[argc])
{
    fill(argv);
}

Strings::Strings(char *environLike[])
:
    d_size(count(environLike)),
    d_str(new string[d_size])
{
    fill(environLike);
}

Strings::Strings(istream &in)
:
    d_size(0),
    d_str(0)
{
    string line;
    while (getline(in, line))
        add(line);
}
