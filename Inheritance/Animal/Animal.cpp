#include<iostream>
#include "Animal.h"

void Animal::eat(string food)
	{
		cout<<"Eating .with.. "<<food<<endl;
	}
	
Animal::Animal(string Name,string Color,int Legs,bool hasTail)
	{
		name=Name;
		color=Color;
		legs=Legs;
		hastail=hasTail;
	}
	
void Animal::show()
			{
				cout<<"Name = "<<name<<endl;
				cout<<"color = "<<color<<endl;
				cout<<"legs = "<<legs<<endl;
				cout<<"Name = "<<name<<endl;
			}

