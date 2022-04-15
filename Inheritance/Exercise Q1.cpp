#include<iostream>
using namespace std;
class employee{
	int id,scale;
	public:
		void input();
		void show();
};
class manager:public employee{
	int id;
	char depart[20];
	public:
		void input();
		void show();
};
void employee::input(){
	cout<<"Enter employee id : ";
	cin>>id;
	cout<<"Enter employee scale : ";
	cin>>scale;
}
void employee::show(){
	cout<<"ID : "<<id<<endl;
	cout<<"Scale : "<<scale<<endl;
}
void manager::show(){
	employee::show();
	{
		cout<<"Manager ID : "<<id<<endl;
		cout<<"Department : "<<depart<<endl;
	}
}
void manager::input(){
			employee::input();
			cout<<"Enter Manager ID : ";
			cin>>id;
			cout<<"Enter Department : ";
			cin>>depart;
		}

int main()
{
	manager obj;
	obj.input();
	obj.show();
}
