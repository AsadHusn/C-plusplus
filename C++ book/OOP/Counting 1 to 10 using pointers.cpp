#include<iostream>
using namespace std;
int main()
{
	int n[10];
	int *p;
	p=n;
	int i;
	//values initialized
	for(i=0;i<9;i++)
	{
		n[i]=i+1;
	}
	
	for(i=0;i<9;i++)
	{
		cout<<*p<<endl;
		*p++;
	}
}
