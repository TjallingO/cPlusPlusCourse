#include "main.ih"

int main()
{
    cout <<
        Type<int>::located << ' ' <<
        Type<int, double>::located << ' ' <<
        Type<int, int>::located << ' ' <<
        Type<int, double, int>::located << ' ' <<
        Type<int, double, int>::located << ' ' <<
        Type<int, double, int, int, int>::located <<
        '\n';
}
