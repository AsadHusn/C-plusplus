#include<iostream>
using namespace std;
int main()
{
	int rows,stars,space,i,j;
	cout <<"Enter rows:";
	cin >>rows;
	stars=1;
	space=rows-1;
	for(i=1;i<rows*2;i++)
	{
		for(j=1;j<=space;j++)
		cout<<" ";
		for(j=1;j<stars*2;j++)
		cout<<"*";
		cout<<"\n";
		if(i<rows)
		{
			stars++;
			space--;
		}
		else
		{
			stars--;
			space++;
		}
	}
}
