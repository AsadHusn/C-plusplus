#include<iostream>
using namespace std;
int main()
{
	int n;
	char x;
	cout<<"\t\t\t\tProgram Start\n\nEnter any value 1/2:\n";
	
	cin>>n;
	if(n==1)
	{
		cout<<"Hey! you win an Orange.\nYou like oranges or not..?\tY/N\n";
			cin>>x;
			if(x=='y')
			{cout<<"Good! I like it too.";}
			else if(x=='n')
			cout<<"You should try it..! It's very healthy.";
			else
			cout<<"Press y for ""YES"" and n for ""NO""\n";
	}
	else if(n==2)
	{
		cout<<"Hey! you win an Apple.\nYou like Apples or not..?\tY/N\n";
			cin>>x;
			if(x=='y')
			cout<<"Good! I like it too.";
			else if(x=='n')
			cout<<"You should try it..! It's very healthy.";
			else
			cout<<"Press Y for ""yes"" and N for ""NO""\n";
	}
	else
	cout<<"Unknown value\n";
}
