#include<iostream>
using namespace std;
class A{
	int a;
	public:
		A(int x)
		{
			a=x;
			cout<<"A class constructor initialized"<<endl;
		}
		void dispa(void)
		{
			cout<<"Value of A "<<a<<endl;
		}
};
class B{
	int b;
	public:
		B(int y)
		{
			b=y;
			cout<<"B class constructor initialized"<<endl;
		}
		void dispb(void)
		{
			cout<<"Value of B "<<b<<endl;
		}
};
class C:public B,public A
{
	int m;
	public:
		C(int x,int y,int z):A(x),B(y)
		{
			m=z;
			cout<<"C class constructor initialized"<<endl;
		}
	void dispc(void)
	{
		cout<<"Value of m "<<m<<endl;
	}
};
int main()
{
	C obj(10,20,30);
	obj.dispa();
	obj.dispb();
	obj.dispc();
}
