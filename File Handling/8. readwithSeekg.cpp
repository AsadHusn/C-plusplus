#include<iostream>
#include<fstream>
using namespace std;		
};
int main()
{
	fstream obj("asad.txt", ios_base::in | ios::binary);
	if(!obj)
	{
		cout<<"Error";
		exit(1);
	}
	obj.seekg(6);
	char ch;
	while(!obj.eof())
	{
		obj.get(ch);
		cout.put(ch);
	}
	
	obj.close();
	return 0;
}
