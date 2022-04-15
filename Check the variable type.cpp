#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
	string n = "hello";
	cout<<typeid(n).name();
}
