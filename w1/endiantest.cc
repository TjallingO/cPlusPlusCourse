#include <arpa/inet.h>

#include <iostream>

using namespace std;

int main()
{
    uint32_t value = 0x10203040;

    cout << hex << value << ' ' << htonl(value) << '\n';
}
