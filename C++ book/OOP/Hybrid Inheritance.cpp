#include<iostream>
using namespace std;
class student{
	int roll;
	public:
		void getroll(int x)
		{
			roll=x;
		}
		void putroll(){
			cout<<"Roll# : "<<roll;
		}
};
class test:public student{
	protected:
		float t1,t2;
		public:
			void getmarks(float x,float y){
				t1=x;
				t2=y;
			}
			void putmarks(){
				cout<<"Marks Obtained"<<endl;
				cout<<"Test 1 : "<<t1<<endl;
				cout<<"Test 2 : "<<t2<<endl;
			}
};
class sports{
	protected:
		float sport;
		public:
			void getsport(float x){
				sport=x;
			}
			void putsport(){
				cout<<"Sports score : "<<sport;
			}
};
class result:public sports,public test{
	float total;
	public:
		void display();
};
void result::display(){
	total=t1+t2+sport;
	putroll();
	putmarks();
	putsport();
	cout<<"Total score : "<<total;
}
int main()
{
	result obj;
	obj.getroll(135);
	obj.getmarks(85.6,90.4);
	obj.getsport(9.4);
	obj.display();
}
