#include<iostream>
using namespace std;
class A{
	public:
		virtual void show()=0;
};
class B:public A{
	public:
		void show()
		{
			cout<<"Class B using pure virtual function and class"<<endl;
		}
};
int main()
{
	A *ptr;
	ptr=new B;
	ptr->show();
}
