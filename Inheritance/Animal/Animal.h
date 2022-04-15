//#ifndef ANIMAL_H
//#define ANIMAL_H
using namespace std;
class Animal{
	private:
		string name;
		string color;
		int legs;
		bool hastail;
	public:
			Animal(string Name,string Color,int Legs,bool hasTail);
			void show();
			void eat(string food);
};
//#endif
