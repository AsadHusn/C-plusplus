#include<iostream>
using namespace std;
int main()
{
	int a[5],b[5],c[5],i;
	cout<<"Enter Values\n     A"<<endl<<"----------"<<endl;
	for(i=0;i<=4;i++)
	{
		cout<<i+1<<":\t";
		cin>>a[i];
	}
	cout<<"     B"<<endl<<"----------"<<endl;
	for(i=0;i<=4;i++)
	{
		cout<<i+1<<":\t";
		cin>>b[i];
	}
	cout<<endl<<"Addition (A+B)"<<endl;
	for(i=0;i<=4;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=0;i<=4;i++)
	{
		cout<<i+1<<":\t"<<c[i]<<endl;
	}
}
