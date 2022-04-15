#include<iostream>
using namespace std;
void display(int[]);
int main()
{
	int a[5],i;
	cout<<"Enter 5 values"<<endl;
	for(i=0;i<5;i++)
	cin>>a[i];
	display(a);
}
void display(int *b)
{
	int i;
	cout<<"output"<<endl;
	for(i=0;i<5;i++)
	cout<<b[i]<<endl;
}
