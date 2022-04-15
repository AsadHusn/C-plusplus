#include<iostream>
using namespace std;
int main()
{
	try{
	
	int dividend,divisor,quotient;
	cout<<"Enter the dividend: ";
	cin>>dividend;
	cout<<"Enter the divisor: ";
	cin>>divisor;
	if(divisor==0)
	throw 0;
	quotient=dividend/divisor;
	cout<<"Result = "<<quotient;
	}
	catch(int)
	{
		cout<<"Problem! Division by zero";
	}



}
