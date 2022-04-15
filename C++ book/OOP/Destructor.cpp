#include<iostream>
using namespace std;
class test{
	static int count;
	public:
		test(){
			count++;
			cout<<count<<" object created"<<endl;
		}
		~test(){
			cout<<count<<" object destroyed"<<endl;
			count--;
		}
};
int test::count;
int main()
{
	cout<<"Main Block"<<endl;
	test t1;
	{
		cout<<"Block 1"<<endl;
		test t2,t3;
		cout<<endl<<"Exiting from Block 1"<<endl;
	}
	cout<<endl<<"Exiting from Main Block"<<endl;
}
