#include<iostream>
using namespace std;
int main()
{
	int x[3][2],i,j;
	cout<<"Enter value:"<<endl;
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=1;j++)
		{
		cin>>x[i][j];
		}}
		cout<<"Output is"<<endl;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=1;j++)
		cout<<"\t"<<x[i][j];
		cout<<endl;
	}
	
}
