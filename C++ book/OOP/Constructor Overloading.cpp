#include<iostream>
using namespace std;
class test{
	int a,b;
	public:
		test(){
			a=0;
			b=0;
		}
		test(int x){
			a=b=x;
		}
		test(int x,int y){
			a=x;
			b=y;
		}
		void disp(){
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b<<endl;
		}
};
int main()
{
	test A;
	test B(100);
	test C(200,300);
	cout<<"Object A"<<endl;
	A.disp();
	cout<<"Object B"<<endl;
	B.disp();
	cout<<"Object C"<<endl;
	C.disp();	
}
