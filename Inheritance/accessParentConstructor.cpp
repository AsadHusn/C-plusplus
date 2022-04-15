#include<iostream>
using namespace std;
class parent{
	int n;
	public:
		parent()
		{
			n=1;
		}
		parent(int x)
		{
			n=x;
		}
		void show()
		{
			cout<<"n = "<<n<<endl;
		}
};
class child:public parent{
	char ch;
	public:
		child():parent()
		{
			ch='z';
		}
		child(char c,int m):parent(m)
		{
			ch=c;
		}
		void disp()
		{
			parent::show();
			cout<<"ch = "<<ch<<endl;
		}
};
int main()
{
	child obj;
	obj.disp();
	child obj2('*',100);
	obj2.disp();
}
