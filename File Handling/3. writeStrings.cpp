#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream obj;
	obj.open("asad.txt", ios_base::out | ios::trunc);
	char city[50];
	for(int i=0;i<3;i++)
	{
		cout<<"Enter city name "<<i+1<<" : ";
		cin>>city;
		obj<<city<<endl;
	}
	obj.close();
	
	return 0;
}
