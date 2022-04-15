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
	A obj;		//has_a containership
	public:
		void disp()
		{
			obj.show();
			cout<<"B"<<endl;
		}
};
int main()
{
	B obj;
	obj.disp();
}
