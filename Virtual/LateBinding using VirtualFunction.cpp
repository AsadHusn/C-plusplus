#include<iostream>
using namespace std;
class A{
	public:
		virtual void show()
		{
			cout<<"Class A"<<endl;
		}
};
class B:public A{
	public:
		void show()
		{
			cout<<"Class B"<<endl;
		}
};
class C:public A{
	public:
		void show()
		{
			cout<<"Class C"<<endl;
		}
};
int main()
{
	A *ptr;
	cout<<"1. A\n2. B\n3. C"<<endl;
	int n;
	cin>>n;
			
	if(n==1)
	{
		ptr=new A;
		ptr->show();
	}
	else if(n==2)
	{
		ptr=new B;
		ptr->show();
	}
	else if(n==3)
	{
		ptr=new C;
		ptr->show();
	}
	
}
