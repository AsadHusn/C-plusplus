#include<iostream>
using namespace std;
class test{
	int a,b;
	public:
		test(){
			a=5;
			b=10;
		}
		void disp(){
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b<<endl;
		}
};
int main()
{
	test t;
	t.disp();
}
