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
	for(char i='A';i<='Z';i++)
	{
		obj.put(i);
	}
	
	return 0;
}
