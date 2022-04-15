#include<iostream>
using namespace std;
class A{
	int a;
	public:
		void getvala(int);
		int get_a();
};
class B:public A{
	int b,c;
	public:
		void getvalb(int);
		void add();
		void display();
};
void A::getvala(int x)
{
	a=x;
}
int A::get_a()
{
	return a;
}
void B::getvalb(int x)
{
	b=x;
}
void B::add()
{
	c=get_a();
	c=c+b;
}
void B::display()
{
	cout<<endl<<"Value of A "<<get_a();
	cout<<endl<<"Value of B "<<b;
	cout<<endl<<"Total Value "<<c;
}
int main()
{
	B obj;
	int a,b;
	cout<<"Enter value of A: ";
	cin>>a;
	cout<<"Enter value of B: ";
	cin>>b;
	obj.getvala(a);
	obj.getvalb(b);
	obj.add();
	obj.display();
}

























