#include<iostream>
using namespace std;
class parent{
	private:
		int a;
		protected:
			int b;
			public:
				int c;
};
class child:private parent{
	public:
		child()
		{
//			a=2;  	cannot inheritit private member
			b=20;	//protected is now private member of child class
			c=10;	//public is now private member of child class
		}
		void show()
		{
//			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
			cout<<"c = "<<c<<endl;
		}
};
int main()
{
	child obj;
	obj.show();
}
