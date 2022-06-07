using namespace std;

class phonebook{
	char name[20],phno[20];
	public:
		void getdata();
		void showdata();
		void update(char nm[],char telno[]);
		char *getname()
		{
			return name;
		}
		char *getnumber()
		{
			return phno;
		}	
};

void phonebook::getdata(){
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Phone No : ";
	cin>>phno;
	cout<<"Success..."<<endl;
}

void phonebook::showdata(){
		cout<<"Name : "<<name<<endl;
		cout<<"Phone : "<<phno<<endl;
		cout<<"---------"<<endl;
}

void phonebook::update(char nm[],char telno[])
		{
			strcpy(name,nm);
			strcpy(phno,telno);
		}
