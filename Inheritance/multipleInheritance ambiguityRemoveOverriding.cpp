#include<iostream>
using namespace std;
class A{
	public:
		void show()
		{
			cout<<"A"<<endl;
		}
};
class B{
	public:
		void show()
		{
			cout<<"B"<<endl;
		}
};
class C:public A,public B{
	public:
		void show()
		{
			A::show();
			B::show();
			cout<<"C"<<endl;
		}
};
int main()
{
	C obj;
	obj.show();
}
