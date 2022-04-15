#include<iostream>
using namespace std;
class B;
class A{
	int x,y;
	public:
		A()
		{
			x=10;
			y=20;
		}
		friend void show(A,B);
};
class B{
	int y;
	public:
		B()
		{
			y=50;
		}
		friend void show(A obj1,B obj2)
		{
			cout<<"x = "<<obj1.x<<endl;
			cout<<"y = "<<obj2.y<<endl;
		}
};
//	void show(A obj1,B obj2)
//		{
//			cout<<"x = "<<obj1.x<<endl;
//			cout<<"y = "<<obj2.y<<endl;
//		}

int main()
{
	A a;
	
	B b;
	show(a,b);
}
