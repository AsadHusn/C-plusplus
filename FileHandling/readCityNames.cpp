#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream obj;
	obj.open("asad.txt", ios_base::in);
	if(!obj)
	{
		cout<<"Error";
		exit(1);
	}
	char city[50];
	while(!obj.eof())
	{
		obj>>city;
		cout<<city<<endl;
	}
	obj.close();
	return 0;
}
