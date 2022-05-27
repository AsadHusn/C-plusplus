#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream obj("asad.txt", ios_base::in);
	if(!obj)
	{
		cout<<"Error";
		exit(1);
	}
	char ch;
	while(!obj.eof())
	{
		obj.get(ch);
		cout<<ch;
	}
	return 0;
}
