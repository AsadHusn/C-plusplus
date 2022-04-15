#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[3],b[3],temp,i,j;
	cout<<"A"<<endl;
	for(i=0;i<3;i++)
	cin>>a[i];
	cout<<"B"<<endl;
	for(i=0;i<3;i++)
	cin>>b[i];
	for(i=0;i<3;i++)
	{temp=a[i];
	a[i]=b[i];
	b[i]=temp;
	}
	cout<<"After interchange the values\nA"<<endl;
	for(i=0;i<3;i++)
	cout<<a[i]<<endl;
	cout<<"B"<<endl;
	for(i=0;i<3;i++)
	cout<<b[i]<<endl;
}
