#include<iostream>
using namespace std;
struct student{
	char name[30];
	int age;
				};
				int i;
int main()
{
	student obj[3];
	for(i=0;i<3;i++)
	{
		cout<<"Enter Name:\t";
		cin>>obj[i].name;
		cout<<"Enter Age:\t";
		cin>>obj[i].age;
		cout<<endl;
	}
		cout<<"---------"<<endl;
		cout<<endl<<"Name\t\tAge"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<obj[i].name<<"\t:\t"<<obj[i].age<<endl;
	}
}
