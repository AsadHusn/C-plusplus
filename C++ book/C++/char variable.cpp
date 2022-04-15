#include<iostream>
#include<string>
using namespace std;
int main()
{
	char a[10]; int b,i;
	b=0;
	gets(a);
	cout<<"The length of string is : "<<length<<endl;
	for(i=0;i<=length;i++)
	{
		if(a[i]=='a' || a[i]=='A')
		b++;
	}
	cout<<"The total no. of alphabet a are : "<<b<<end;
}	
