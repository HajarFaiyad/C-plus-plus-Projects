//This is a header file for the Animal class 

#include <iostream>
using namespace std;
#include <string>

class Animal {

private:
	string Type; //indicates the type of the animal and can be only one of (herbivore, omnivore, or carnivore)
	string Climate; //indicates the climate for which an animal exits and can be only one of (tropical, cold, or average)
	int eyeNo; //for the number of eyes an animal can have
	int footNo; //for the number of feet an animal can have

public:
	Animal();       //must include a default constructor
	Animal(string type, string climate, int numOfEyes, int numOfFeet);  	//parametrized overridden constructor for the animal class

	// Class Methods:-
	void setType(string myType);
	string getType();

	void setClimate(string myClimate);
	string getClimate();

	void setEyeNo(int num);
	int getEyeNo();

	void setFootNo(int num);
	int getFootNo();

	void info(); //equivalent to a toString method in Java to get all the information of an animal
};
