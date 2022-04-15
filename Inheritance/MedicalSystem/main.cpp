#include<iostream>
#include "Parent.h"
void menu();

int main()
{
	Patient obj;
	obj.getPdetails();
while(true)
{
	menu();
	char choose;
	cin>>choose;
	switch(choose)
	{
		case '0':
			obj.showPdetails();
			system("pause");
			break;
			
		case '1':
			obj.showEyesDetails();
			system("pause");
			break;
		case '2':
			obj.showHeartDetails();
			cout<<"Change heart rate ? (1 for yes) : ";
			cin>>choose;
			if(choose=='1')
			{
				obj.setHeartDetails();
				cout<<"Heart rate set successfully"<<endl;
			}
			system("pause");
			break;
			
		case '3':
			obj.showSkin();
			system("pause");
			break;
			
		case '4':
			exit(0);
			break;
			
		case '5':
			obj.getOrganDetails();
			if(obj.getOname()=="Heart")
			{			
				obj.setHeartDetails();
			}
			else if(obj.getOname()=="Eye")
			{
				obj.setEyesDetails();
			}
			else if(obj.getOname()=="Skin")
			{
				obj.setSkin();
			}
			system("pause");
			break;
			
			
	}
} //while
	
} //main

void menu()
{
	cout<<"-----Treatment-----"<<endl;
	cout<<"\t0. Patient Info"<<endl;
	cout<<"\t1. Eyes"<<endl;
	cout<<"\t2. Heart"<<endl;
	cout<<"\t3. Skin"<<endl;
	cout<<"\t4. Exit"<<endl;
	cout<<"\t5. Set Details"<<endl;
}
