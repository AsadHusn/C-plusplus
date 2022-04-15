#include<iostream>
using namespace std;
class test{
	int code;
	float price;
	public:
		test(int x,float y){
			code=x;
			price=y;
		}
		test(const test &a){
			code=a.code;
			price=a.price;
		}
		void disp(){
			cout<<"Code = "<<code<<endl;
			cout<<"Price = "<<price<<endl;
		}
};
int main()
{
	test t(101,50.5);
	test t1(t);
	cout<<"1st constructor"<<endl;
	t.disp();
	cout<<"copy constructor"<<endl;
	t1.disp();
}

