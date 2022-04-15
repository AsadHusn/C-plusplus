#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
		A()
		{
			x=10;
			y=20;
		}
		friend class B;
};
class B{
	public:
		void show(A obj)
		{
			cout<<"x = "<<obj.x<<endl;
			cout<<"y = "<<obj.y<<endl;
		}
};
int main()
{
	A obj;
	
	B obj2;
	obj2.show(obj);
}
