#include<iostream>
using namespace std;
void fun()
{
	static int x=0;
	cout<<"Ok"<<endl;
	x++;
	cout<<"x = "<<x<<endl;
}
int main()
{
	fun();
}
