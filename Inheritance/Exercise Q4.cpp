#include<iostream>
using namespace std;
class book{
	int id,price;
	char name[20];
	public:
		void input()
		{
			cout<<"Book ID : ";
			cin>>id;
			cout<<"Book Name : ";
			cin>>name;
			cout<<"Price : ";
			cin>>price;
		}
		void show()
		{
			cout<<"Book ID = "<<id<<endl;
			cout<<"Book Name = "<<name<<endl;
			cout<<"Book Price = "<<endl;
		}
};
class writer:public book{
	char name[20],address[30];
	book books[2];
	public:
		void input()
		{
			for(int i=0;i<2;i++)
			{
				books[i].input();
			}
			cout<<"Writer Name : ";
			cin>>name;
			cout<<"Writer Address : ";
			cin>>address;
		}
		void show()
		{
			cout<<endl<<"----------"<<endl;
			for(int i=0;i<2;i++)
			{
				books[i].show();
			}
			cout<<"Writer Name = "<<name<<endl;
			cout<<"Writer Address = "<<address<<endl;
		}
};
int main()
{
	writer obj;
	obj.input();
	obj.show();
}
