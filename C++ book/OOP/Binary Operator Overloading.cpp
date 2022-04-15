#include<iostream>
using namespace std;
class test{
	int a,b;
	public:
		test()
		{
			a=0;
			b=0;
		}
		test(int x,int y)
		{
			a=x;
			b=y;
		}
		void disp()
		{
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b<<endl;
		}
		test operator +(test t)
		{
			test temp;
			temp.a= a+ t.a;
			temp.b= b+ t.b;
			return temp;
		}
};
int main()
{
	test t1,t2,sum;
	t1=test(10,30);
	t2=test(30,40);
	sum=t1+t2;
	cout<<"t1"<<endl;
	t1.disp();
	cout<<endl<<"t2"<<endl;
	t2.disp();
	cout<<endl<<"sum"<<endl;
	sum.disp();
	
	
}
