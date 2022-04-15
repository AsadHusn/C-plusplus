#include<iostream>
using namespace std;
class A;
class B{
	int b;
	public:
		void getb(int x){
			b=x;
		}
		void putb(void){
			cout<<"value of b = "<<b<<endl;
		}
		friend void add(A,B);
};
class A{
	int a;
	public:
	void geta(int x){
		a=x;
	}
	void puta(void){
		cout<<"value of a = "<<a<<endl;
	}
	friend void add(A,B);
};
void add(A oba,B obb){
	cout<<"Addition of A&B = "<<oba.a+obb.b;
}
int main()
{
	A a;
	B b;
	a.geta(100);
	b.getb(50);
	a.puta();
	b.putb();
	add(a,b);
}








