// CPP program to convert string to char array
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string str("GeeksForGeeks");
	
	// the c_str() function returns a const pointer to null terminated contents.
	const char *ch = str.c_str();

	cout<<ch;
}

