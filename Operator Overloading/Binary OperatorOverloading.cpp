#include<iostream>
using namespace std;
class Test{
	int a;
	public:
		Test()
		{
			a=0;
		}
		void input()
		{
			cout<<"Enter a : ";
			cin>>a;
		}
		void show()
		{
			cout<<"a = "<<a<<endl;
		}
		void operator +(Test t)
		{
			a=a+t.a;
		}
};
int main()
{
	Test t1,t2;
	t1.input();
	t2.input();
	t1+t2;
	t1.show();
}
