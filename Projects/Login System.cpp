#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	while(true)
	{
		cout<<"--------"<<endl<<"1. Login\n2. Register\n3. Exit\nSelect: ";
		char choice = getche();
		cout<<endl;
		string username, password, un, pw;
		bool found;
	
		if(choice == '1')
		{
			//	open file to read
			ifstream in("data.txt", ios::in);
			if(!in.is_open())
			{
				cout<<"File error";
				break;
			}
			
			cout<<"Enter username: ";	getline(cin, username);
			cout<<"Enter password: ";	getline(cin, password);
			
			//	check record
			while(!in.eof())
			{
				getline(in, un);
				getline(in, pw);
				found = false;
				//	check username
				if(username == un)
				{
					//	check password
					if(password == pw)
					cout<<"\tSuccessfully logged in!"<<endl;
					else
					cout<<"\tPassword incorrect"<<endl;
					
					//	if record found
					found = true;
					break;
				}
			}
			//	if record not found
			if(!found)
			cout<<"\tFalse Login!\n";
			in.close();		//	close file
		}
		else if(choice == '2')
		{
			fstream file;
			//	create file if not exist
			file.open("data.txt", ios_base::app);
			file.close();
		
			cout<<"Enter username: ";	getline(cin, username);		//	input name
		
			//	read file n check name
			file.open("data.txt", ios::in);
			while(!file.eof())
			{
				found = false;
				getline(file, un);
				if(username == un)
				{
					found = true;
					cout<<"\tUser already exist"<<endl;
					break;
				}
			}
			file.close();	//	close read
		
			//	if name exist then skip
			if(found)
			continue;
		
			cout<<"Enter password: ";	getline(cin, password);		//	input password
		
			//	open to write
			file.open("data.txt", ios::app);
			file<<username<<endl<<password<<endl;
			file.close();
		
			cout<<"\tRegister Successfully!"<<endl;
		}
	
		else if(choice == '3')
		return 0;
	
		else
		cout<<"wrong choice";
	}
	getch();
}
