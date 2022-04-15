#include<iostream>
using namespace std;
class test{
	int a,b,c;
	public:
		void getdata(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		void disp(){
			cout<<"Values are: "<<endl<<a<<endl<<b<<endl<<c<<endl;
		}
		void operator -()
		{
			a=-a;
			b=-b;
			c=-c;
		}
};
int main()
{
	test obj;
	obj.getdata(-19,29,38);
	obj.disp();
	-obj;
	obj.disp();
}
