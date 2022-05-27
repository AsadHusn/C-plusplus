#include<iostream>
#include<fstream>
using namespace std;
struct student{
	int roll;
	char name[20];
};
int main()
{
	fstream obj("asad.txt", ios_base::out | ios::binary | ios::trunc);
	if(!obj)
	{
		cout<<"Error";
		exit(1);
	}
	student s;
	for(int i=0;i<2;i++)
	{
		cout<<"Enter Roll No: ";
		cin>>s.roll;
		cout<<"Enter Name: ";
		cin>>s.name;
		obj.write((char*)&s,sizeof(s));
	}
	obj.close();
	return 0;
}
