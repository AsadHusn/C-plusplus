#include<iostream>
using namespace std;
class rectangle{
	int l,b;
	public:
		rectangle(int x=2, int y=4){
			l=x;
			b=y;
			cout<<"I am parametrized"<<endl;
		}
		void area(){
			cout<<"Area is "<<l*b<<endl;
		}
		
};
int main()
{
	rectangle r;
	r.area();
	rectangle r1(3,6);
	r1.area();
	rectangle r2(10);
	r2.area();
	
}
