#include <cstdarg>

using namespace std;

#define fun(...);

int main()
{
    fun();
    fun("with functions");
    fun(1, 2, 3);
}
