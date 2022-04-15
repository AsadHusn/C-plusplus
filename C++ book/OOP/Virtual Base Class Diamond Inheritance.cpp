#include<iostream>
using namespace std;
class A{
	int a=10;
	public:
		void dispa(){
			cout<<"Class A "<<a<<endl;
		}
};
class B:public virtual A{
	int b;
	public:
		void dispb(){
			b=20;
			cout<<"Class B "<<b<<endl;
		}
};
class C:public virtual A{
	int c;
	public:
		void dispc(){
		c=30;
			cout<<"Class C "<<c<<endl;
		}
};
class D:public B,public C{
	int d=40;
	public:
		void dispd(){
			cout<<"Class D "<<d<<endl;
		}
};
int main()
{
	D obj;
	obj.dispa();
	obj.dispb();
	obj.dispc();
	obj.dispd();
}
