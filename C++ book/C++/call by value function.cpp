#include<iostream>
using namespace std;
void cube(int *);
int main()
{
	int n=5;
	int ans;
	cout<<"n is:"<<n<<endl;
	cube(&n);
	cout<<"cube is:"<<n;
}
void cube(int *a)
{
	*a=*a * *a * *a;
}
