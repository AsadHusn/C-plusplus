#include<iostream>
using namespace std;
void fun()
{
	register x=0;
	cout<<"Ok"<<endl;
	x++;
	cout<<"x = "<<x<<endl;
}
int main()
{
	fun();
}
