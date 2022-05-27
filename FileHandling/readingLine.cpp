#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream out("asad.txt", ios_base::out);
	if(!out)
	{
		cout<<"Error";
		exit(1);
	}
	char str[50];
	for(int i=0;i<2;i++)
	{
		cout<<"Enter string : ";
		gets(str);
		out<<str<<endl;
	}
	out.close();
	out.open("asad.txt", ios::in);
	while(!out.eof())
	{
		out.getline(str,50);
		cout<<str<<endl;
	}
	out.close();
	return 0;
}
