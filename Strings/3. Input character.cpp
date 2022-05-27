#include<iostream>
using namespace std;
int main()
{	
	char c;
	//	get single character but buffer overflow not removed
	c = cin.get();
	//	print single character
	cout.put(c);
}
