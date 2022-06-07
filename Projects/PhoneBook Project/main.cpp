#include<iostream>
#include<fstream>
#include<string.h>
#include "phonebook.h"
using namespace std;
fstream file("record.dat", ios::binary | ios::out | ios::in | ios::ate);
void addnew();
void menu();
void show();
void searchname();
void searchno();
void update();
void deleterecord();
void clearall();
phonebook rec;
char option;
int main()
{	
	if(!file.is_open())
	{
		cout<<"File Error";
		exit(1);
	}
	while(1)
	{
		menu();
		switch(option){
			case '1':
				addnew();
				break;
			case '2':
				show();
				break;
			case '3':
				searchname();
				break;
			case '4':
				searchno();
				break;
			case '5':
				update();
				break;
			case '6':
				exit(0);
				break;
			case '7':
				system("cls");
				break;
			case '8':
				deleterecord();
				break;
			case '9':
				clearall();
				break;
			default:
				break;
		}
	}
	file.close();
	return 0;
}
// main() ends

void menu()
{
		cout<<endl<<"*****PhoneBook*****"<<endl;
		cout<<"1) Add New contact"<<endl;
		cout<<"2) Display All contacts"<<endl;
		cout<<"3) Search by Name"<<endl;
		cout<<"4) Search by Number."<<endl;
		cout<<"5) Update Number"<<endl;
		cout<<"6) Exit"<<endl;
		cout<<"7) Clear Screen"<<endl;
		cout<<"8) Delete Contact"<<endl;
		cout<<"9) Clear File"<<endl;
		cout<<endl<<"\tSelect Option: ";
		cin>>option;
		cout<<endl;
}
void addnew()
	{
		cout<<"\t\t(note:-\t spaces won't work)"<<endl;
		rec.getdata();
		file.write((char*)&rec,sizeof(rec));
		system("pause");
		system("cls");
	}
	
void show()
{
	cout<<"---Records in Phone Book---"<<endl;
	file.seekg(ios::beg);
	while(file.read((char*)&rec,sizeof(rec)))
		{
			if(!file.eof())
			{
				rec.showdata();
				cout<<endl;
			}
		}
		file.clear();
		system("pause");
		system("cls");
}

void searchname()
{
				cout<<"---Search---"<<endl;
				char nm[20];
				cout<<"Enter Name : ";
				cin>>nm;
				
				bool found=false;
				
				file.seekg(ios::beg);
				while(file.read((char*)&rec,sizeof(rec)))
				{	
					if(stricmp(nm,rec.getname())==0)
					{
						found=true;
						rec.showdata();
					}
				}
				file.clear();
				if(found==false)
				{
					cout<<"**Contact not found**"<<endl;
				}
				system("pause");
				system("cls");
}

void searchno()
{
				char telno[20];
				bool found=false;
				cout<<"Enter Telephone Number : ";
				cin>>telno;
				file.seekg(ios::beg);
				while(file.read((char*)&rec,sizeof(rec)))
				{
					if(stricmp(telno,rec.getnumber())==0)
					{
						found=true;
						rec.showdata();
					}
				}
				file.clear();
				if(found==false)
				{
					cout<<"**Record not found**"<<endl;
				}
				system("pause");
				system("cls");
}

void update()
{
				char nm[20];
				cout<<"Enter contact name to change : ";
				cin>>nm;
				
				bool found=false;
				int cnt;
				cnt=0;
				file.seekg(ios::beg);
				while(file.read((char*)&rec,sizeof(rec)))
				{
					cnt++;
					if(stricmp(nm,rec.getname())==0)
					{
						found=true;
						break;
					}
				}
				file.clear();
				if(found==false)
				{
					cout<<"Record not found"<<endl;
				}
				else
				{
					int location = (cnt-1) * sizeof(rec);
					char telno[20];
					cout<<"Enter new name : ";
					cin>>nm;
					cout<<"Enter new phone number : ";
					cin>>telno;
					file.seekp(location);
					rec.update(nm,telno);
					file.write((char*)&rec,sizeof(rec));
					cout<<"Success..."<<endl;
				}
				system("pause");
				system("cls");
}

void deleterecord()
{
				char nm[20];
				cout<<"Enter contact name to Delete : ";
				cin>>nm;
				
				bool found=false;
				int cnt=0;
				
				file.seekg(ios::beg);
				while(file.read((char*)&rec,sizeof(rec)))
				{
					cnt++;
					if(stricmp(nm,rec.getname())==0)
					{
						found=true;
						break;
					}
				}
				file.clear();
				if(found==false)
				{
					cout<<"not found such contact"<<endl;
				}
				else
				{
					int location = (cnt-1) * sizeof(rec);
					file.seekp(location);
					rec.update("\0","\0");
					file.write((char*)&rec,sizeof(rec));
					cout<<"Success..."<<endl;
				}
				system("pause");
				system("cls");
}

void clearall()
{
				cout<<"Clear all data"<<endl<<"Are you sure?\t(y/n) : ";
				char sure;
				cin>>sure;
				if(sure=='y' || sure=='Y')
				{
					file.close();
					file.open("record.dat", ios::binary | ios::out | ios::in | ios::ate | ios::trunc);
					cout<<"Success"<<endl;
					system("pause");
					system("cls");
				}
				else
				{
					cout<<"Ok"<<endl;
					system("pause");
					system("cls");
				}
}
