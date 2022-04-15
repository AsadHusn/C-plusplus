#include<iostream>
using namespace std;
class test{
	int a,b;
	public:
		void getval(void){
			cout<<"Enter value of A : ";
			cin>>a;
			cout<<"Enter value of B : ";
			cin>>b;
		}
		void display(test p){
			cout<<endl<<"Value of A = "<<p.a;
			cout<<endl<<"Value of B = "<<p.b;
		}
		test sum(test x,test y)
		{
			test total;
			total.a=x.a+y.a;
			total.b=x.b+y.b;
			return total;
		}
		
};




int main()
{
	test obj1,obj2,obj3;
	cout<<"user 1"<<endl;
	obj1.getval();
	cout<<"user 2"<<endl;
	obj2.getval();
	cout<<"------------"<<endl;
	obj1.display(obj1);
	obj2.display(obj2);
	cout<<endl<<"total value"<<endl;
	obj3=obj3.sum(obj1,obj2);
	obj3.display(obj3);
	
	
}
