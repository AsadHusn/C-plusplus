#include<iostream>
using namespace std;
class sum{
	int a,b,t;
	public:
		void getdata(void);
		void printdata(void);
};
void sum::getdata(void)
{
	cout<<"Enter 1st value: ";
	cin>>a;
	cout<<"Enter 2nd value: ";
	cin>>b;
}
void sum::printdata()
{
	t=a+b;
	cout<<"The Total is "<<t;
}
int main()
{
	sum obj;
	obj.getdata();
	obj.printdata();
}
