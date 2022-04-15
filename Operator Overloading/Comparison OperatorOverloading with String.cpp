#include<iostream>
#include<string.h>
using namespace std;
class Test{
	char s[30];
	public:
		Test()
		{
			s[0]='\0';
		}
		void input()
		{
			cout<<"Enter string : ";
			gets(s);
		}
		void show()
		{
			puts(s);
		}
		int operator ==(Test t)
		{
			if(strlen(s)==strlen(t.s))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};
int main()
{
	Test t1,t2;
	t1.input();
	t2.input();
	if(t1==t2)
	{
		cout<<"yes it is equal"<<endl;
	}
	else
	{
		cout<<"Not equal"<<endl;
	}
}
