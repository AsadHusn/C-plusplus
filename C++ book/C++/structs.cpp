#include<iostream>
using namespace std;
struct student{char name[50];int roll,age;};
int main()
{
	student a;
	cout<<"Please Enter name:"<<endl;
	gets(a.name);
	cout<<"Please enter age:"<<endl;
	cin>>a.age;
	cout<<"Please enter roll:"<<endl;
	cin>>a.roll;
	cout<<"Name:";
	puts(a.name);
	cout<<"Age:"<<a.age<<endl<<"Roll No:"<<a.roll<<endl;
}
