#include<iostream>
#include<cstdlib>	//rand()
#include<ctime>		//time()
using namespace std;
int main()
{
	srand(time(NULL));
	int n = rand() % 10 + 1;
	for(int i=5; i>0; i--)
	{
		int x;
		cout<<"Guess a number (1 to 10)\t"<<i<<"): ";
		cin>>x;
		
		if(x<1 || x>10)
		{
			cout<<"Not in range"<<endl;
			return 0;
		}
		if(x==n)
		{
			cout<<"\tYou got it!";
			return 0;
		}
		else if(x>n)
			cout<<"\tToo higher"<<endl;
		else
			cout<<"\tToo lower"<<endl;
	}
	cout<<"Better Luck Next Time"<<endl;
	cout<<"Answer = "<<n<<endl;
}
