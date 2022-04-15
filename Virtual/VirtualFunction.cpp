#include<iostream>
using namespace std;
class test{
	public:
		virtual void show()
		{
			cout<<"Class A"<<endl;
		}
};
class test2:public test{
	public:
		void show()
		{
			cout<<"Class B"<<endl;
		}
};
int main()
{
	test obj;
	test2 obj2;
	
	test *ptr;
	ptr=&obj2;
	
	ptr->show();
}
