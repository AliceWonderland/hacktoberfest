// LANGUAGE: C++
// ENV: N/A
// AUTHOR: Yukthi Lochana
// GITHUB: https://github.com/yuk7hi

// simple Hello World program written using c++

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namesoace std;

int main()
{
	cout << "Hello World!" << endl;

	// wait for the user to interact with the program
	cout << "Press Enter to continue..." << endl;
	cin.ignore(10, '\n');
	cin.get();
	return 0;
}
