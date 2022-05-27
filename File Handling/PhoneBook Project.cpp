#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class phonebook{
	char name[20],phno[20];
	public:
		void update(char nm[],char telno[])
		{
			strcpy(name,nm);
			strcpy(phno,telno);
		}
		void getdata();
		void showdata();
		char *getname()
		{
			return name;
		}
		char *getnumber()
		{
			return phno;
		}	
};
void phonebook::getdata(){
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Phone No : ";
	cin>>phno;
	cout<<"Success..."<<endl;
}
void phonebook::showdata(){
		cout<<"Name : "<<name<<endl;
		cout<<"Phone : "<<phno<<endl;
		cout<<"---------"<<endl;
}
int main()
{
	fstream obj("asad.txt", ios::binary | ios::out | ios::in | ios::ate);
	if(!obj.is_open())
	{
		cout<<"File Error";
		exit(1);
	}
	
	phonebook rec;
	char choice;
	bool found;
	
	while(1)
	{
		cout<<endl<<"*****PhoneBook*****"<<endl;
		cout<<"1) Add New Record"<<endl;
		cout<<"2) Display All Records"<<endl;
		cout<<"3) Search Person Name"<<endl;
		cout<<"4) Search Telephone No."<<endl;
		cout<<"5) Update Telephone No."<<endl;
		cout<<"6) Exit"<<endl;
		cout<<"7) Clear"<<endl;
		cout<<"8) Delete Contact"<<endl;
		
		cout<<endl<<"Select Option: ";
		cin>>choice;
		cout<<endl;
		
		switch(choice){
			case '1':
				rec.getdata();
				obj.write((char*)&rec,sizeof(rec));
				system("pause");
				system("cls");
				break;
				
			case '2':
				cout<<"---Records in Phone Book---"<<endl;
				obj.seekg(ios::beg);
				while(obj.read((char*)&rec,sizeof(rec)))
				{
					if(!obj.eof())
					{
						rec.showdata();
						cout<<endl;
					}
				}
				obj.clear();
				system("pause");
				system("cls");
				break;
				
			case '3':
				cout<<"---Search---"<<endl;
				char nm[20];
				cout<<"Enter Name : ";
				cin>>nm;
				
				found=false;
				
				obj.seekg(ios::beg);
				while(obj.read((char*)&rec,sizeof(rec)))
				{	
					if(stricmp(nm,rec.getname())==0)
					{
						found=true;
						rec.showdata();
					}
				}
				obj.clear();
				if(found==false)
				{
					cout<<"**Contact not found**"<<endl;
				}
				system("pause");
				system("cls");
				break;
				
			case '4':
				char telno[20];
				found=false;
				cout<<"Enter Telephone Number : ";
				cin>>telno;
				obj.seekg(ios::beg);
				while(obj.read((char*)&rec,sizeof(rec)))
				{
					if(stricmp(telno,rec.getnumber())==0)
					{
						found=true;
						rec.showdata();
					}
				}
				obj.clear();
				if(found==false)
				{
					cout<<"**Record not found**"<<endl;
				}
				system("pause");
				system("cls");	
				break;
			case '5':
				found=false;
				int cnt;
				cnt=0;
				cout<<"Enter contact name to change : ";
				cin>>nm;
				obj.seekg(ios::beg);
				while(obj.read((char*)&rec,sizeof(rec)))
				{
					cnt++;
					if(stricmp(nm,rec.getname())==0)
					{
						found=true;
						break;
					}
				}
				obj.clear();
				if(found==false)
				{
					cout<<"Record not found"<<endl;
				}
				else
				{
					int location = (cnt-1) * sizeof(rec);
					
					cout<<"Enter new name : ";
					cin>>nm;
					cout<<"Enter new phone number : ";
					cin>>telno;
					obj.seekp(location);
					rec.update(nm,telno);
					obj.write((char*)&rec,sizeof(rec));
					cout<<"Success..."<<endl;
				}
				system("pause");
				system("cls");
				break;
			case '8':
				found=false;
				cnt=0;
				cout<<"Enter contact name to Delete : ";
				cin>>nm;
				obj.seekg(ios::beg);
				while(obj.read((char*)&rec,sizeof(rec)))
				{
					cnt++;
					if(stricmp(nm,rec.getname())==0)
					{
						found=true;
						break;
					}
				}
				obj.clear();
				if(found==false)
				{
					cout<<"not found such contact"<<endl;
				}
				else
				{
					int location = (cnt-1) * sizeof(rec);
					obj.seekp(location);
					rec.update("\0","\0");
					obj.write((char*)&rec,sizeof(rec));
					cout<<"Success..."<<endl;
				}
				system("pause");
				system("cls");
				break;
			case '7':
				system("cls");
				break;
			case '6':
				exit(0);
			default:
				break;
		}
	}
	obj.close();
	return 0;
}
