#include<iostream>
using namespace std;
class test{
	int a,b,c;
	public:
		void getdata(int x,int y,int z)
		{
			a=x; b=y; c=z;
		}
		void operator -();
		void disp()
		{
			cout<<"Value of A = "<<a<<endl;
			cout<<"Value of B = "<<b<<endl;
			cout<<"Value of C = "<<c<<endl;
		}
};
void test::operator -() 
	{
		a=-a;
		b=-b;
		c=-c;
	}
int main()
{
	test obj;
	obj.getdata(-10,30,40);
	obj.disp();
	obj.operator -();
	cout<<"After unary operator overloading"<<endl;
	obj.disp();
}
