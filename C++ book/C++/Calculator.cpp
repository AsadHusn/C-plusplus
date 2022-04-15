#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char c;
	cout<<"Enter 1st number then operator and then second 2nd number:\n";
	cin>>a>>c>>b;
	switch(c)
	{
		case '+':
		cout<<a+b;
		break;
		case '-':
		cout<<a-b;
		break;
		case '*':
		cout<<a*b;
		break;
		case '/':
		cout<<a/b;
		break;
		default:
		cout<<"Invalid Operator";
	}
}
