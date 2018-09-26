// Programming in C/C++
// Week 3: Assignment 23
// Tjalling Otter & Emiel Krol
// Main file

#include "main.ih"

using namespace std;

int main()
{
	string exampleArray[] =
	{
		"eAEGIERwrihxmVOAbKKxDmrLhKyKgr",
		"CSmsswBbyPLTtWlFeIuhcjfQQm",
		"l){Ly)54)EAE|2Sefj!cg(ZEg&fwkhtgSj4!mtYo:),Luj"
	};

	for (size_t index = 0; index != 3; ++index)
	{
		quicksort(exampleArray[index], 0, exampleArray[index].size() - 1);	// Sort string
		cout << exampleArray[index] << "\n"; // Output (now sorted) string
	}
	// Output:
	// AAbDeEEGghhiIKKKKLmmORrrrVwxxy
	// BbCceFfhIjLlmmPQQssSTtuwWy
	// !!&()))),2445:AcEEeEffggghjjjklLLmoSSttuwyYZ{|
}
