#include<iostream>
using namespace std;
int main()
{
	char a[7][10],i,j;
	for(i=0;i<7;i++)
	{
		for(j=0;j<10;j++)
		cin>>a[i][j];
	}
	for(i=0;i<7;i++)
	{
		for(j=0;j<10;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
}
