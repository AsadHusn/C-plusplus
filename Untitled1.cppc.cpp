#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class phonebook{
	char name[20];
	int phno;
	public:
		int count;
		phonebook()
		{
			count=0;
		}
		void getdata();
		void showdata();
		char *getname()
		{
			return name;
		}
	
};
void phonebook::getdata(){
	count++;
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Phone No : ";
	cin>>phno;
}
void phonebook::showdata(){
	if(count==0)
	{
		cout<<"List is empty"<<endl;
	}
	else
	{
		cout<<endl<<"---Records in Phone Book---"<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Phone : "<<phno<<endl;
	}
}
int main()
{
	ifstream obj("asad.txt", ios::binary);
	if(!obj.is_open())
	{
		cout<<"Error";
		exit(1);
	}
	phonebook rec;
	int choice;
	
	while(1)
	{

		cout<<endl<<"*****PhoneBook*****"<<endl;
		cout<<"1) Add New Record"<<endl;
		cout<<"2) Display All Records"<<endl;
		cout<<"3) Search Telephone No."<<endl;
		
		cout<<"6) Exit"<<endl;
		
		cout<<"Choose your choice : ";
		cin>>choice;
		bool found=false;
		char nm[20];
		
		switch(choice){
			case 1:
				rec.getdata();
				
				break;
			case 2:
				obj.seekg(0,ios::beg);
				while(!obj.eof())
				{
					obj.read((char*)&rec,sizeof(rec));
					rec.showdata();
				}
				obj.clear();
				break;
			case 3:
				cout<<"---Search---"<<endl;
				cout<<"Enter Name : ";
				cin>>nm;
				obj.seekg(0,ios::beg);
				while(obj)
				{
					
					obj.read((char*)&rec,sizeof(rec));
					int n=strcmp(nm,rec.getname());
					if(!obj.eof())
					cout<<n;
					obj.clear();
				}
				break;
				
				
			case 6:
				exit(0);
		}
	}
	
	
	obj.close();
	return 0;
}
