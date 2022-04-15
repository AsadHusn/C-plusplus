#include<iostream>
#include<string.h>
using namespace std;
class student{
	int roll;
	char name[10];
	public:
		void getdata(int,char[]);
		void putdata();
};
void student::getdata(int x,char *y)
{
	roll=x;
	strcpy(name,y);
}
void student::putdata()
{
	cout<<"Student Name : "<<name<<endl;
	cout<<"Roll No : "<<roll<<endl;
}
int main()
{
	student obj;
	student *p;
	p=&obj;
	(*p).getdata(192,"Asad");
	(*p).putdata();
	
	
	
	
}
