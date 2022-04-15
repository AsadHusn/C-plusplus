#include<iostream>
using namespace std;
class Count{
	int n;
	public:
		Count()
		{
			n=0;
		}
		void show()
		{
			cout<<"n = "<<n<<endl;
		}
		//prefix
		Count operator ++()
		{
			n=n+1;
			Count temp;
			temp.n=n;
			return temp;
		}
		//postfix
		Count operator ++(int)
		{
			n=n+1;
			Count temp;
			temp.n=n;
			return temp;
		}
};
int main()
{
	Count a,b;
	a.show();
	b.show();
	a=b++;
	b=a++;
	a.show();
	b.show();
}
