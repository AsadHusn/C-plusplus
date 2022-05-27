#include<iostream>
#include<fstream>
using namespace std;			
};
int main()
{
	fstream obj("asad.txt");
	if(!obj.is_open())
	{
		cout<<"Error";
		exit(1);
	}
	obj.close();
	return 0;
}
