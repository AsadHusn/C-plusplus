#include<iostream>
using namespace std;
class move{
	protected:
		int position;
	public:
		move()
		{
			position=0;
		}
		void forward()
		{
			position++;
		}
		void show()
		{
			cout<<"Position = "<<position<<endl;
		}
};
class move2:public move{
	public:
		void backward()
		{
			position--;
		}
};
int main()
{
	move2 obj;
	obj.show();
	obj.forward();
	obj.show();
	obj.backward();
	obj.show();
}
