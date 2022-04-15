using namespace std;
class Pateint;
class Organ;
class Heart;
class Eye;
class Skin;


class Organ{
	private:
	string oname,mc;
	protected:
	public:
		Organ()
		{
			oname=mc='\0';
		}
		void getOrganDetails();
		void showOrganDetails();
		string getOname();
};


class Heart:virtual public Organ{
	int rate;
	public:
		Heart()
		{
			rate=0;
		}
		void setHeartDetails();
		void showHeartDetails();
};



class Eye:virtual public Organ{
	string color;
	bool opened;
	public:
		Eye()
		{
			color='\0';
			opened=false;
		}
		void setEyesDetails();
		void showEyesDetails();
		void open();
		void close();
};
class Skin:virtual public Organ{
	string color;
	int softness;
	public:
		Skin()
		{
			color="\0";
			softness=0;
		}
		void setSkin();
		void showSkin();
};

class Patient:public Heart,public Eye,public Skin{
	private:
		string name;
		int age;
	public:
		Patient()
		{
			name='\0';
			age=0;
		}
		void getPdetails();
		void showPdetails();
};
