#include "main.ih"

#include <fstream>

using namespace std;

void hello(ostream &out)
{
    out << "hello world\n";
}

int main()
{
    fstream out2{ "./tmp/out2" };
    hello(out2);

    ofstream out1{ "./tmp/out1" };
    hello(out1);
}
