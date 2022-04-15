#include<iostream>
using namespace std;
class A{
	protected:
		int a;
};
class B:public A{
	protected:
		int b;
};
class C:public B{
	int c;
	public:
		C()
		{
			a=1;		//protected
			b=2;		//protected
			c=3;
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
	obj.show();
}
