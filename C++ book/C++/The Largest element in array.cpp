#include<iostream>
using namespace std;
int main()
{
	int n[3],i;
	cout<<"Enter 3 inputs"<<endl;
	for(i=0;i<3;i++)
	{
		cin>>n[i];
	}
	for(i=0;i<3;i++)
	{
		if(n[0]<n[i+1])
		n[0]=n[i+1];
	}
	cout<<"The largest number is "<<n[0];
}
