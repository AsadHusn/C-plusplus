#include<iostream>
using namespace std;
class person{
	private:
	int id;
	char name[20],city[20];
	public:
		person()
		{
			id=0;
			name[0]='\0';
			city[0]='\0';
		}
		void input()
		{
			cout<<"Enter id : ";
			cin>>id;
			cout<<"Enter name : ";
			cin>>name;
			cout<<"Enter city : ";
			cin>>city;
		}
		void disp()
		{
			cout<<"id : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"City : "<<city<<endl;
		}
};
class student:public person{
	private:
	int roll,marks;
	public:
		student():person()
		{
			roll=marks=0;
		}
		void input()			//this is called function overriding
		{
			cout<<"Enter Roll No : ";
			cin>>roll;
			
			person::input();	//this is called function overriding
			
			cout<<"Enter Marks : ";
			cin>>marks;
		}
		void disp()				//this is called function overriding
		{
			cout<<"Roll No : "<<roll<<endl;
			person::disp();		//this is called function overriding
			cout<<"Marks : "<<marks<<endl;
		}
};
int main()
{
	student obj;
	obj.input();
	obj.disp();
}
