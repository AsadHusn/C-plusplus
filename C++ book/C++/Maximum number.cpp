#include<iostream>
using namespace std;
int main()
{
	int a,b,c,max;
	cout<<"Enter 1st 2nd and 3rd number"<<endl;
	cin>>a>>b>>c;
	max=a;
	if(max<b)
	max=b;
	if(c>max)
	max=c;
	cout<<"The Maximum number is : "<<max;
	
	
}
