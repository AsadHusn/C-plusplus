#include<iostream>
using namespace std;
int main()
{
//	c++ decimal datatypes are float f, double d, long double l
	
	//long double values should end with 'd'
	long double n = 5.121L;
	
	//shows scientific
	cout<<scientific;
	cout<<n<<endl;
	
	//shows fixed with 6 digits
	cout<<fixed;
	cout<<n<<endl;
}
