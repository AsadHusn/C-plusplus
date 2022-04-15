#include<iostream>
using namespace std;
class A{
	protected:
		int a;
	public:
		void get(int x)
		{
			a=x;
		}
};
class B:public A{
	protected:
		int b;
	public:
		void get(int x,int y)
		{
			A::get(x);
			b=y;
		}
};
class C:public B{
	int c;
	public:
		void get(int x,int y,int z) //multilevel inheritance with parameter
		{
			B::get(x,y);
			c=z;
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
	obj.get(1,2,3);
	obj.show();
}
