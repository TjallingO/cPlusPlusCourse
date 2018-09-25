// Programming in C/C++
// Week XX: Assignment XX
// Tjalling Otter & Emiel Krol
// Main file

#include "main.ih"

int main(int argc, char const *argv[])
{
	string hello = "agsdfgb";
	cout << hello;
	quicksort(&hello, 0, hello.size());
	cout << hello;
	return 0;
}
