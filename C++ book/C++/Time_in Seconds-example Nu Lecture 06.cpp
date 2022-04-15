#include<iostream>
using namespace std;
struct time{
	int hours;
	int minutes;
	int seconds;
			};
int toseconds(time now);
int main()
{
	time t;
	while(cin>>t.hours>>t.minutes>>t.seconds)
	{
		cout<<"Total seconds:"<<toseconds(t)<<endl;
	}
		return 0;
}
int toseconds(time now)
{
	return 3600*now.hours+60*now.minutes+now.seconds;
}
