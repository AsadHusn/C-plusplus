#include<iostream>
using namespace std;
class parent{
	int n;
	public:
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
		child(char c,int i):parent(i)
		{
			ch=c;
		}
		void show()				//function overriding
		{
			parent::show();		//function overriding
			cout<<"ch = "<<ch<<endl;
		}
};
int main()
{
	child obj('@',7);
	obj.show();	
}
