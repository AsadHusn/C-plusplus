#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int age();
int square_root();
int main()
{
	char a;
	int x,y;
	float c,d;
	cout<<endl<<"****---- Welcome to my Calculator written by Asad ----****"<<endl;
	cout<<"\nWhich task you want to perform (+,-,*,/)"<<endl;
	cout<<"Age Calculator\t\t(press c)"<<endl;
	cout<<"Square Root\t\t(press s)"<<endl;
	cin>>a;
	if(a=='+' || a=='-' || a=='*' || a=='/')
	{
	switch(a)
	{
		case '+':
			cout<<"*******\t\tAddition\t*******"<<endl<<endl;
			cout<<"Enter 1st number:\t";
			cin>>x;
			cout<<"Enter 2nd number:\t";
			cin>>y;
			cout<<"---------------------------"<<endl<<"The answer is\t:\t"<<x+y;
		break;
		case '-':
			cout<<"*******\t\tSubtraction\t*******"<<endl<<endl;
			cout<<"Enter 1st number:\t";
			cin>>x;
			cout<<"Enter 2nd number:\t";
			cin>>y;
			cout<<"---------------------------"<<endl<<"The answer is\t:\t"<<x-y;
		break;
		case '*':
			cout<<"*******\t\tMultiplication\t*******"<<endl<<endl;
			cout<<"Enter 1st number:\t";
			cin>>x;
			cout<<"Enter 2nd number:\t";
			cin>>y;
			cout<<"---------------------------"<<endl<<"The answer is\t:\t"<<x*y;
		break;
		case '/':
			cout<<"*******\t\tDivision\t*******"<<endl<<endl;
			cout<<"Enter 1st number:\t";
			cin>>c;
			cout<<"Enter 2nd number:\t";
			cin>>d;
			cout<<"---------------------------"<<endl<<"The answer is\t:\t"<<c/d;
		break;
	}
	cout<<endl<<endl;
	}
	else if(a=='c')
	{
		age();
	}
	else if(a=='s')
	{
		square_root();
	}
	else
	cout<<"Error";
	getch();
}
int age()
{
	int days,months,age;
	cout<<"*******\tAge Calculator\t*******"<<endl<<endl;
	cout<<"How old are you? ";
	cin>>age;
	days=age*365;
	months=age*12;
	cout<<"---------------------------"<<endl;
	cout<<"Your age in days\t : "<<days<<endl;
	cout<<"your age in Months : "<<months<<endl;
}
int square_root()
{
	int n;
	cout<<"*******\tSquare Root\t*******"<<endl<<endl;
	cout<<"Enter Number : ";
	cin>>n;
	cout<<"---------------------------"<<endl;
	cout<<"The Square Root of "<<n<<" is "<<sqrt(n);
}

