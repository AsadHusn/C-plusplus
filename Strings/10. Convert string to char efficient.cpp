// CPP program for the above approach
#include <iostream>
using namespace std;
int main()
{
	string str("GeeksForGeeks");
	// simply assign the address of first element
	char *ch = &str[0];
	cout<<ch;
}
