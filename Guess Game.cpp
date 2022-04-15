#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	string name;
	cout<<"Guess Game"<<endl;
	cout<<"May I have you name?"<<endl;
	cin>>name;
	cout<<"Hello "<<name<<endl;
	cout<<"Shall we begin?"<<endl;
	cout<<"\t1. Yes"<<endl;
	cout<<"\t2. No"<<endl;
	int ans;
	cin>>ans;
	if(ans!=1)
	{
		cout<<"Exiting..."<<endl;
		exit(1);
	}
	int x,n;
	x=rand() % 10 + 1;
	label:
	cout<<"Guess a number between 1 to 10 : ";
	cin>>n;
	if(n<1 || n>10)
	{
		cout<<"Not in range"<<endl;
		goto label;
	}
	
	for(int i=1;i<=5;i++)
	{
		if(n==x)
		{
			cout<<"Congratulations! you guessed in "<<i<<" times"<<endl;
			exit(1);
		}
		else if(n>x)
		{
			cout<<"Guess lower:"<<endl;
			cin>>n;
		}
		else
		{
			cout<<"Guess higher:"<<endl;
			cin>>n;
		}
	}
	cout<<endl<<"-----------"<<endl;
	cout<<"Better Luck Next Time"<<endl;
	cout<<"Game Over"<<endl;
	cout<<"The number was "<<x<<endl;
	
	
	

}
