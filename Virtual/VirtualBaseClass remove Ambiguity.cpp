#include<iostream>
using namespace std;
class A{
	protected:
		int n;
};
class B:virtual public A{
};
class C:virtual public A{
};
class Child:public B,public C{
	public:
		void show()
		{
			n=10;		//remove ambiguity in multiple inheritance
			cout<<n;
		}
};
int main()
{
	Child obj;
	obj.show();
}
