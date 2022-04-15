#include<iostream>
using namespace std;
int main()
{
	int arr[5]={10,20,30,40,50};
	int *p,i,sum=0;
	p=&arr[0];
	cout<<"Elements of array are:"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"\t"<<*p<<endl;
		sum=sum+*p;
		p++;
	}
	cout<<"Sum is = "<<sum;
}
