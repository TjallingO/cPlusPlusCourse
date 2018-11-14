void fun(...);
// This is a variadic function declaration. It does not 'do' anything, per se,
// but it does allow the program to compile.

int main()
{
    fun();
    fun("with functions");
    fun(1, 2, 3);
}
