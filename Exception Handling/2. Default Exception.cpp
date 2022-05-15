#include<iostream>
using namespace std;
int main()
{
	try
	{
		throw 1;
	}
	catch(...)
	{
		cout<<"Default Exceptions";
	}
}
