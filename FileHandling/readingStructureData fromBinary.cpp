#include<iostream>
#include<fstream>
using namespace std;
struct student{
	int roll;
	char name[20];
};
int main()
{
	fstream obj("asad.txt", ios_base::in | ios::binary);
	if(!obj)
	{
		cout<<"Error";
		exit(1);
	}
	student s;
	while(!obj.eof())
	{
		obj.read((char*)&s,sizeof(s));
		cout<<"RollNo = "<<s.roll<<endl;
		cout<<"Name = "<<s.name<<endl;
	}
	obj.close();
	return 0;
}
