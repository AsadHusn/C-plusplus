#include<iostream>
#include<fstream>
using namespace std;
class country{
	private:
		int id;
		char name[20];
		public:
			void get()
			{
				cout<<"Enter ID : ";
				cin>>id;
				cout<<"Enter Name : ";
				cin>>name;
			}
			void show()
			{
				cout<<"ID = "<<id<<endl;
				cout<<"Country = "<<name<<endl;
			}
};
int main()
{
	fstream obj("asad.txt", ios_base::out | ios::binary);
	if(!obj)
	{
		cout<<"Error";
		exit(1);
	}

	country c1;
	c1.get();
	obj.write((char*)&c1,sizeof(class country));
	obj.close();
	return 0;
}
