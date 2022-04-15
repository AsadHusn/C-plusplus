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
		void operator +(Test t)
		{
			strcat(s,t.s);
		}
};
int main()
{
	Test t1,t2;
	t1.input();
	t2.input();
	t1.show();
	t2.show();
	t1+t2;
	t1.show();
	
}
