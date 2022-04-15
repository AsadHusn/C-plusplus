#include<iostream>
#include<string.h>
using namespace std;
class bank{
	char name[20],type[20];
	int acc_no,balance;
	public:
		bank()
		{
			name[0]=type[0]=acc_no=balance=0;
		}
		void details()
		{
			cout<<"Enter name : ";
			cin>>name;
			cout<<"Enter account No : ";
			cin>>acc_no;
			cout<<"Enter account Type : ";
			cin>>type;
			cout<<"Enter opening balance : ";
			cin>>balance;
		}
		void deposit(int amount)
		{
			balance+=amount;
			cout<<"Balance after deposit = "<<balance<<endl;
		}
		void withdraw(int amount)
		{
			if(amount>balance)
			{
				cout<<"Not enough amount in the account"<<endl;
			}
			else
			{
			balance-=amount;
			cout<<"Balance after withdraw = "<<balance<<endl;	
			}
		}
		void display(void)
		{
			cout<<"------Account Details------"<<endl;
			cout<<"Account name : "<<name<<endl;
			cout<<"Account no : "<<acc_no<<endl;
			cout<<"Account type : "<<type<<endl;
			cout<<"Current balance : "<<balance<<endl;
			cout<<"------End------"<<endl;
		}
		void operator +(bank temp)
		{
			balance+=temp.balance;
		}
};
int main()
{
	bank x,y;
	x.deposit(1500);
	y.deposit(1000);
	x.display();
	y.display();
	x+y;
	x.display();
}
