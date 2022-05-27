#include<iostream>
#include<fstream>
using namespace std;	
int main()
{
	fstream obj("asad.txt", ios_base::out | ios::binary | ios::app);
	if(!obj)
	{
		cout<<"Error";
		exit(1);
	}
	obj.seekp(6);
	obj<<"Dear";
	
	obj.close();
	return 0;
}
