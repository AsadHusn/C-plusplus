#include<iostream>
using namespace std;
int main()
{
	try
	{
		try
		{
			throw 20;
		}
		catch(int x)
		{
			cout<<"Handle Partially";
			throw;
		}
	}
	catch(int x)
	{
		cout<<"Handle Remaining";
	}
}
