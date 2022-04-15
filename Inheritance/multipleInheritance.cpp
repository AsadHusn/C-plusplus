#include<iostream>
using namespace std;
class A{
	protected:
		int a;
};
class B{
	protected:
		int b;
};
class C:public A,public B{
	int c;
	public:
		void get() //multiple inheritance
		{
			a=2;
			b=4;
			c=6;
		}
		void show()
		{
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
			cout<<"c = "<<c<<endl;
		}
};
int main()
{
	C obj;
	obj.get();
	obj.show();
}
