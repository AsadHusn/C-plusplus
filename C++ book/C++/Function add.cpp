#include<iostream>
using namespace std;
void display(int[]);
int main()
{
	int n[5],i;
	for(i=0;i<5;i++)
	{	cout<<"Enter value"<<i+1;
		cin>>n[i];
	}
		display(n);
}
void display(int *b)
{
	int i;
	for(i=0;i<5;i++)
	cout<<"\t"<<b[i];
}
