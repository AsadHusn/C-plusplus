#include<iostream>
using namespace std;
class test{
	int a,b;
	public:
		test()
		{
			a=9;
			b=2;
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
	test t1;
	t1=test(20,30);
	t1.disp();
}
