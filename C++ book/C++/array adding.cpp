#include<iostream>
using namespace std;
int main()
{
	int a[3],b[3],s[3],i;
	cout<<"A"<<endl;
	for(i=0;i<3;i++)
	cin>>a[i];
	cout<<"B"<<endl;
	for(i=0;i<3;i++)
	cin>>b[i];
	cout<<"After adding"<<endl;
	for(i=0;i<3;i++)
	{
	s[i]=a[i]+b[i];		
	}
	for(i=0;i<3;i++)
	cout<<s[i]<<endl;
}
