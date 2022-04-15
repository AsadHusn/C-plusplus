#include <iostream>  // input/output handling
#include <ctype.h>   // character type functions
using namespace std;
int main()
{
	char ch;
	cout << "Enter a character: ";
	cin >> ch; 
	cout << "The toupper(" << ch << ") = " << (char) toupper(ch) << endl;
	cout << "The tolower(" << ch << ") = " << (char) tolower(ch) << endl;
	if (isdigit(ch))
		cout << "'" << ch <<"' is a digit!\n";
	else
		cout << "'" << ch <<"' is NOT a digit!\n";
}
