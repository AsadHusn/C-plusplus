#include<iostream>
#include<string.h>
using namespace std;
class Test{
	int pages,days;
	public:
		Test()
		{
			pages=days=0;
		}
		void input()
		{
			cout<<"How many days have you read? : ";
			cin>>days;
			cout<<"How many pages have you read? : ";
			cin>>pages;
		}
		void show()
		{
			cout<<"Days = "<<days<<endl<<"Pages = "<<pages<<endl;
		}
		//arithmatic assignment operator
		void operator +=(Test t)
		{
			days+=t.days;
			pages+=t.pages;
		}
};
int main()
{
	Test t1,t2;
	t1.input();
	t2.input();
	t1+=t2;
	cout<<"Total is ----"<<endl;
	t1.show();
}
