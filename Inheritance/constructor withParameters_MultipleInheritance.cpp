#include<iostream>
using namespace std;
class A{
	int a;
	public:
		A(int x)
		{
			a=x;
			cout<<"a = "<<a<<endl;
		}
};
class B{
	int b;
	public:
		B(int y)
		{
			b=y;
			cout<<"b = "<<b<<endl;
		}
};
class C:public A,public B{
	int c;
	public:
		C(int z,int y,int x):B(y),A(x)
		{
			c=z;
			cout<<"c = "<<c<<endl;
		}
};
int main()
{
	C obj(1,2,3);
}
