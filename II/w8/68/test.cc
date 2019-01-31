#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main()
{

auto entry = fs::recursive_directory_iterator(".");
cout << typeid(entry).name();

}
