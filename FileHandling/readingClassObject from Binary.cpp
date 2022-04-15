#include<iostream>
#include<fstream>
using namespace std;
class country{
	private:
		int id;
		char name[20];
		public:
			void show()
			{
				cout<<"ID = "<<id<<endl;
				cout<<"Country = "<<name<<endl;
			}
			
};
int main()
{
	fstream obj("asad.txt", ios_base::in | ios::binary);
	if(!obj)
	{
		cout<<"Error";
		exit(1);
	}

	country c1;
	obj.read((char*)&c1,sizeof(class country));
	c1.show();
	obj.close();
	return 0;
}
