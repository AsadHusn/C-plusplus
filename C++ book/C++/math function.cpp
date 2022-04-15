#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	// Getting a double value
	double x;
	cout<<"Please enter a real number: ";
	cin >> x;
	// Compute the ceiling and the floor of the real number
	cout << "The ceil(" << x << ") = " << ceil(x) << endl;
	cout << "The floor(" << x << ") = " << floor(x) << endl;
}
