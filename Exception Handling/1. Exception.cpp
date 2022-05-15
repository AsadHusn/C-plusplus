#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int d;
	try
	{
		if(b==0)
		{
			throw a;
		}
	}
	catch(int x)
	{
		cout<<"Cannot divide by zero";
	}
}
