#include<iostream>
using namespace std;
int main()
{
	int n[5],i;
	cout<<"\t\tInput\n";
	for(i=0;i<=4;i++)
	{
	cout<<"Marks of student-"<<i+1<<"\t:\t";
	cin>>n[i];}
	cout<<"\t\tOutput\n";
	for(i=0;i<=4;i++)
	{
		cout<<"Marks of student-"<<i+1<< "\t:\t"<<n[i]<<endl;
	}
}
