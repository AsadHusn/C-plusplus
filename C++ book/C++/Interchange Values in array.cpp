#include<iostream>
using namespace std;
int main()
{
	int a[5],b[5],i,temp;
	cout<<"Initial values"<<endl<<"\t\tA"<<endl;
	for(i=0;i<=4;i++)
	{
		cin>>a[i];
	}
	cout<<"\n\t\tB"<<endl;
	for(i=0;i<=4;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<=4;i++)
	{
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	cout<<endl<<"After Interchange"<<endl<<"\t\tA"<<endl;
	for(i=0;i<=4;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"\t\tB"<<endl;
	for(i=0;i<=4;i++)
	{
		cout<<b[i]<<endl;
	}
	cout<<"------Ends------";
}
