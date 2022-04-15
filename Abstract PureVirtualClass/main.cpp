
#include "mytest.h"

int main()
{
	abstract *ptr;
	ptr=new test;
	ptr->print();
	
	ptr=new mytest;
	ptr->print();
	
	return 0;
}
