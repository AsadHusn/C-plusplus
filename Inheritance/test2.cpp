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
class D:public B,public C{
	public:
		D()
		{
			n=5;
			cout<<"n="<<n;
		}
};
int main()
{
	D obj;
}
