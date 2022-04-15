#include<iostream>
using namespace std;
class animal{
	protected:
		const int speed;
		string taxonomi,canpet,caneaten,layegg;
		public:
	void maxspeed();
	void taxonomy(string);
	void canbepet(string);
	void canbeeaten(string);
	void layeggs(string);
};

void animal::maxspeed()
{
	speed=30;
}
void animal::taxonomy(string x)
{
	taxonomi=x;
}
void animal::canbepet(string x)
{
	canpet=x;
}
void animal::canbeeaten(string x)
{
	caneaten=x;
}
void animal::layeggs(string x)
{
	layegg=x;
}


class horse:public animal{
	protected:
	string run,transport;
	public:
	void canrun(string);
	void usedfortransport(string);
};
void horse::canrun(string x){
	run=x;
}
void horse::usedfortransport(string x)
{
	transport=x;
}




class bird:public animal{
	protected:
	string havefeather,fly;
	void feather(string);
	void canfly(string);
};
void bird::feather(string x)
{
	havefeather=x;
}
void bird::canfly(string x)
{
	fly=x;
}

class pagasus : public horse,public bird{
	public:
		void display();
		
};
void pagasus::display()
{
	cout<<run<<endl;
	cout<<"Speed = "<<speed<<endl;
	
}

int main()
{
	pagasus p;
	const int maximumspeed;
	string taxo,pet,run,feather,fly,eaten,eggs,transport;
	cout<<"How much legs a Pagasus have?";
	cin>>leg;
	cout<<"Is Pagasus can run?"<<endl;
	cin>>run;
	p.canrun(run);
	cout<<"How much average speed a Pagasus have?"<<endl;
	cin>>maximumspeed;
	p.maxspeed(maximumspeed);
	p.display();
	
	
	
	
}














