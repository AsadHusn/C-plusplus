#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
using namespace std;
class phonebook{
	private:
		char name[30], number[30];
	public:
		void get()
		{
			cout<<"\t\t** Enter name: ";	cin.getline(name, 30);
			cout<<"\t\t** Enter number: ";	cin.getline(number, 30);
		}
		void disp()
		{
			cout<<name<<endl;
			cout<<number<<endl;
		}
		char* getname()
		{
			return name;	
		}
		char* getnumber()
		{
			return number;
		}
} contact;

//	functions prototypes
void add();
void menu();
void show();
void searchname();
void searchno();
void delcontact();
void deleteall();

//	Driver
int main()
{
	while(true)
	{
		menu();
		system("pause");
		system("cls");
	}
}
//	menu
void menu()
{
		puts("*****PhoneBook*****");
		puts("1) Add New contact");
		puts("2) Display All contacts");
		puts("3) Search by Name");
		puts("4) Search by Number.");
		puts("5) Delete Contact");
		puts("6) Delete all contacts");
		puts("0) Exit");
		cout<<"\t* Select: ";
		char option = getche();
		cout<<endl;
		switch(option)
		{
			case '1':
				add();
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
				delcontact();
				break;
			case '6':
				deleteall();
				break;
			case '0':
				exit(0);
				break;
			default:
				puts("\t\t** Invalid option");
				break;
		}
}
//	add
void add()
	{
		ofstream file("data.txt", ios::app);
		contact.get();
		// write
		file.write((char*)&contact, sizeof(phonebook));
		file.close();
		puts("\t\t\t*** Contact saved successfully");
	}
//	show
void show()
{
	ifstream file("data.txt");
	if(!file.is_open())
	{
		puts("\t\t** File Error");
		return;
	}
	// read
	int count = 0;
	while(true)
	{
		file.read((char*)&contact, sizeof(phonebook));
		if(file.eof())
		break;
		contact.disp();
		cout<<endl;
		count++;
	}
	if(count == 0)
	puts("\t\t** File is empty");
	else
	cout<<"\t\t** Contacts = "<<count<<endl;
	file.close();
}
//	search by name
void searchname()
{
	ifstream file("data.txt");
	if(!file.is_open())
	{
		puts("\t\t** File Error");
		return;
	}
	//	input name
	char nm[30];
	cout<<"\t\t** Enter name to search: ";	cin.getline(nm, 30);
	// search
	bool found = false;
	while(!file.eof())
	{
		file.read((char*)&contact, sizeof(phonebook));
		if(stricmp(nm, contact.getname()) == 0)
		{
			found = true;
			cout<<"\t\t\t*** "<<contact.getnumber()<<endl;
			break;
		}
	}
	if(!found)
	puts("\t\t\t*** Not found");
	file.close();
}
//	search by number
void searchno()
{
	ifstream file("data.txt");
	if(!file.is_open())
	{
		puts("\t\t** File Error");
		return;
	}
	char no[30];
	cout<<"\t\t** Enter number to search: ";	cin.getline(no, 30);
	// search
	bool found = false;
	while(!file.eof())
	{
		file.read((char*)&contact, sizeof(phonebook));
		if(stricmp(no, contact.getnumber()) == 0)
		{
			found = true;
			cout<<"\t\t\t*** "<<contact.getname()<<endl;
			break;
		}
	}
	if(!found)
	puts("\t\t\t*** Not found");
	file.close();
}
//	delete contact
void delcontact()
{
	ifstream file("data.txt");
	if(!file.is_open())
	{
		puts("\t\t** File Error");
		return;
	}
	//	get name to delete
	char nm[30];
	cout<<"\t\t** Enter contact name to delete: ";	cin.getline(nm, 30);
	
	// search the position of contact
	bool found = false;
	int count = 0;
	while(true)
	{
		file.read((char*)&contact, sizeof(phonebook));
		if(file.eof())
		break;
		count++;
		if(stricmp(nm, contact.getname()) == 0)
		{
			found = true;
			break;
		}
	}
	if(!found)
	{
		puts("\t\t\t*** Not found");
		return;
	}
	
	//	set position to start of file
	file.seekg(ios::beg);
	
	//	create temp file
	ofstream temp("temp.txt", ios::out);
	//	copy first half
	for(int i=1; i<count; i++)
	{
		file.read((char*)&contact, sizeof(phonebook));
		temp.write((char*)&contact, sizeof(phonebook));
	}
	//	skip the contact to delete
	file.read((char*)&contact, sizeof(phonebook));
	//	copy remaining half
	while(true)
	{
		file.read((char*)&contact, sizeof(phonebook));
		if(file.eof())
		break;
		temp.write((char*)&contact, sizeof(phonebook));
	}
	
	file.close();
	temp.close();
	cout<<"\t\t\t*** "<<nm<<" deleted successfully"<<endl;
	remove("data.txt");
	rename("temp.txt", "data.txt");
}

//	delete all
void deleteall()
{
	cout<<"\t\t** Are you sure? (Y/N): ";
	char c = towlower(getche());
	puts("");
	if(c=='y')
	{
		ofstream file("data.txt", ios::trunc);
		file.close();
		puts("\t\t\t*** Deleted");
	}
	else
	puts("\t\t\t*** Cancelled");
}
