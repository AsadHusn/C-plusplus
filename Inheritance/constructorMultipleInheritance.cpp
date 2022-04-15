#include<iostream>
using namespace std;
class A{
	public:
		A()
		{
			cout<<"A ok"<<endl;
		}
};
class B{
	public:
		B()
		{
			cout<<"B ok"<<endl;
		}
};
class C:public A,public B{
	public:
		C():B(),A()
		{
			cout<<"C ok"<<endl;
		}
};
int main()
{
	C obj;
}
