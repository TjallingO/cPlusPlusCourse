#include "main.ih"
#include <cstdio>
#include <cstdarg>

void fun(...)
{
}


int main()
{
    fun();
    fun("with functions");
    fun(1, 2, 3);
}
