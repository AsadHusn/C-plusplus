#include<iostream>
#include "Parent.h"

void Patient::getPdetails()
		{
			cout<<"Patient Name : ";
			cin>>name;
			cout<<"Patient Age : ";
			cin>>age;
		}
void Patient::showPdetails()
		{
			cout<<"Patient's Name : "<<name<<endl;
			cout<<"Patient's Age : "<<age<<endl;
		}

void Organ::getOrganDetails()
		{
			cout<<"Organ Name : ";
			cin>>oname;
			cout<<"Medical Condition : ";
			cin>>mc;
		}
void Organ::showOrganDetails()
		{
			cout<<"Organ : "<<oname<<endl;
			cout<<"Medical Condition : "<<mc<<endl;
		}
		
string Organ::getOname()
{
	return oname;
}

void Heart::setHeartDetails()
		{
			cout<<"Set heart rate : ";
			cin>>rate;
		}
void Heart::showHeartDetails()
		{
			Organ::showOrganDetails();
			cout<<"Heart rate is "<<rate<<endl;
		}
void Eye::setEyesDetails()
{
	cout<<"Set Eyes color : ";
	cin>>color;
	cout<<"\t1. Open\n\t2. Close"<<endl;
	char ch;
	cin>>ch;
	if(ch=='1')
	{
		open();
	}
	else if(ch=='2')
	{
		close();
	}
}

void Eye::showEyesDetails()
{
	Organ::showOrganDetails();
	cout<<"Color : "<<color<<endl;
}

void Eye::open()
{
	opened=true;
	cout<<"Eyes are opened successfully"<<endl;
}
void Eye::close()
{
	opened=false;
	cout<<"Eyes are closed successfully"<<endl;
}

void Skin::setSkin()
{
	cout<<"Skin Color : ";
	cin>>color;
	cout<<"Skin Softness : ";
	cin>>softness;
}

void Skin::showSkin()
{
	Organ::showOrganDetails();
	cout<<"Skin Color : "<<color<<endl;
	cout<<"Skin Softness : "<<softness<<endl;
}
