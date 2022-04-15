#include<iostream>
using namespace std;
int main()
{
	int a=100;
	int *p=&a;
	int **p1=&p;
	
	cout<<"Value of A "<<a<<endl;
	cout<<"Value of A using P "<<*p<<endl;
	cout<<"Value of A using P1 "<<**p1<<endl;
	cout<<"Address of A "<<&a<<endl;
	cout<<"Address of A using P "<<p<<endl;
	cout<<"Address of A using P1 "<<*p1<<endl;
	cout<<"Address of P "<<&p<<endl;
	cout<<"Address of P using P1 "<<p1<<endl;
	cout<<"Address of P1 "<<&p1; 
}
