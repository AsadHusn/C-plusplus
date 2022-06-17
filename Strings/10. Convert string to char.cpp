// CPP program to convert string to char array
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string s = "geeksforgeeks";
	int n = s.length();

	// declaring character array
	char char_array[n + 1];

	// copying the contents of the
	// string to char array
	strcpy(char_array, s.c_str());

	cout<<char_array;
}

