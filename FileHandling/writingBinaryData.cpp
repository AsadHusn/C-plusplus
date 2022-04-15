#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream obj("asad.txt", ios_base::out | ios::binary);
	if(!obj)
	{
		cout<<"Error";
		exit(1);
	}
	for(int i=1;i<=5;i++)
	{
		obj.write((char*)&i,sizeof(int));
	}	
	obj.close();
	return 0;
}
