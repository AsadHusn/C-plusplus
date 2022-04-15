#include<iostream>
using namespace std;
class Count{
	private:
		int n;
		public:
			Count()
			{
				n=0;
			}
			void operator ++()
			{
				n=n+1;
			}
			void show()
			{
				cout<<"n = "<<n<<endl;
			}
};
int main()
{
	Count obj;
	obj.show();
	++obj;
	obj.show();
}
