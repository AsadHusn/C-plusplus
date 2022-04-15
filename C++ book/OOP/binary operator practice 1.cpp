#include<iostream>
using namespace std;
class test{
	int a=0,b=0;
	public:
		void getval(int,int);
		void disp();
		test operator +(test);
		
};
void test::getval(int x,int y)
{
	a=x;
	b=y;
}
test test:: operator +(test x)
{
	test temp;
	temp.a=a+x.a;
	temp.b=b+x.b;
	return temp;
}
void test::disp()
{
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b<<endl;
}
int main()
{
	test a,b,sum;
	a.getval(10,20);
	b.getval(30,40);
	sum=a+b;
	cout<<endl<<"Display"<<endl;
	a.disp();
	b.disp();
	sum.disp();
}




