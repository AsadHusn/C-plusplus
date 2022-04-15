#include<iostream>
#include<cassert>
using namespace std;
int main()
{
	int dividend,divisor,quotient;
	cout<<"Enter the dividend: ";
	cin>>dividend;
	cout<<"Enter the divisor: ";
	cin>>divisor;
	assert(divisor!=0);
	quotient=dividend/divisor;
	cout<<"Result = "<<quotient;
}
