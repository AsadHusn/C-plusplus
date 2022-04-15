#include<iostream>
using namespace std;
union a{
	char name[30];
	int age;
}g;
void print();
int main()
{
	cout<<"Enter name:";
	cin>>g.name;
	cout<<"Enter age:";
	g.age=18;
	print();
}
void print()
{
	cout<<"name= "<<g.name<<endl;
	cout<<"age= "<<g.age;
}
