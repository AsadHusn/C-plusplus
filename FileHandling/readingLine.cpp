#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream obj("asad.txt", ios_base::out);
	if(!obj)
	{
		cout<<"Error";
		exit(1);
	}
	char str[50];
	for(int i=0;i<2;i++)
	{
		cout<<"Enter string : ";
		gets(str);
		obj<<str<<endl;
	}
	obj.close();
	obj.open("asad.txt", ios::in);
	while(!obj.eof())
	{
		obj.getline(str,50);
		cout<<str<<endl;
	}
	obj.close();
	return 0;
}
