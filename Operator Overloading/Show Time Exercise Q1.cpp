#include<iostream>
#include<string.h>
using namespace std;
class Time{
	int hour,minutes,seconds;
	public:
		Time()
		{
			hour=minutes=seconds=0;
		}
		Time(int h,int m,int s)
		{
			hour=h;
			minutes=m;
			seconds=s;
		}
		void show()
		{
			cout<<hour<<" : "<<minutes<<" : "<<seconds<<endl;
		}
		void operator ++(int)
		{
			if(minutes==59)
			{
				minutes=0;
				hour++;
			}
			else
			{
				minutes++;
			}
		}
		void operator --(int)
		{
			if(minutes==0)
			{
				minutes=59;
				hour--;
			}
			else
			{
				minutes--;
			}
		}
};
int main()
{
	Time x(0,59,58);
	x.show();
	x++;
	x.show();
	x--;
	x.show();
}
