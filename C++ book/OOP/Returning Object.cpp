#include<iostream>
using namespace std;
class test{
	int a,b;
	public:
		void getval(int x,int y){
			a=x;	b=y;
		}
		friend test sum(test,test);
		void disp(test);
};
test sum(test t1,test t2){
	test t;
	t.a=t1.a+t2.a;
	t.b=t1.b+t2.b;
	return t;
}
void test::disp(test p)
{
	cout<<"Value of A = "<<p.a<<endl;
	cout<<"Value of B = "<<p.b<<endl;
}
int main()
{
	test A,B,C;
	A.getval(10,30);
	B.getval(40,35);
	C=sum(A,B);
	A.disp(A);
	B.disp(B);
	C.disp(C);
}
