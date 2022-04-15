#include<iostream>
using namespace std;
class student{
	protected:
		int roll;
		public:
			void getroll(int x){
				roll=x;
			}
			void putroll(){
				cout<<"Roll# : "<<roll;
			}
};
class test:public student{
	protected:
		float m1,m2;
		public:
			void getmarks(float x,float y)
			{
				m1=x;
				m2=y;
			}
			void putmarks(){
				cout<<"Marks in subject 1 = "<<m1<<endl;
				cout<<"Marks in subject 2 = "<<m2<<endl;
			}
};
class result:public test{
	int total;
	public:
		void display(){
			total=m1+m2;
			putroll();
			putmarks();
			cout<<"Total marks : "<<total;
		}
};
int main()
{
	result obj;
	obj.getroll(135);
	obj.getmarks(53.5,76.6);
	obj.display();
}















	

