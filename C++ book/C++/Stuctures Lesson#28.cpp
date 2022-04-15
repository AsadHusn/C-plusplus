#include<iostream>
using namespace std;
struct student{
				char name[30];
				int age;
				int roll;
				}a,b;
int main()
{
	cout<<"Enter your name:\t";
	cin>>a.name;
	cout<<"Enter your age:\t";
	cin>>a.age;
	cout<<"Enter your roll no#:\t";
	cin>>a.roll;
	cout<<"---------"<<endl;
	cout<<"Name:\t\t"<<a.name<<endl;
	cout<<"Age:\t\t"<<a.age<<endl;
	cout<<"Roll#:\t\t"<<a.roll<<endl;
	b=a;
	cout<<"---------"<<endl;
	cout<<"Name:\t\t"<<b.name<<endl;
	cout<<"Age:\t\t"<<b.age<<endl;
	cout<<"Roll#:\t\t"<<b.roll<<endl;
}
