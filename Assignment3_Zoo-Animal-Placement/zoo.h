//This is a header file for the Climate class

// DECLARATION: The relationship between Animal and Zoo is an Is-A relationship thus INHERITANCE should be used 
//								It is NOT proper to use Composition here because it is not a Has-A relationship        
//                                                 A zoo is an animals here!!

#include <iostream>
#include <string>
#include "animal.h" 
using namespace std;

class Zoo: public Animal{

	// I use protected to facilitate the access 
protected: 
	int id;// a five digit integer that stands for the name of an animal
	string food, location, animalType;
			//food: which kind of diet the animal eats: "grass","meat","fish"
			//location: name of an animal placement. Can be only one of "grassland","oceanic","mountain".
			//animalType: Can only be one of "sea lion","bear","gazelle".
public:

	Zoo();  // a default constructor
	Zoo(int id, string food, string location, string animalType); //parametrized overridden constructor for the zoo class

	//Class Methods:- 
	//I created setters and getter to be able to accesss the class' parameters from another class if needed.
	void setID(int id);
	int getID();

	void setFood(string food);
	string getFood();

	void setLocation(string location);
	string getLocation();

	void setAnimalType(string animalType);
	string getAnimalType();

	//I created a function that will take an animal object and match it with the correct plcement 
	void matchMyAnimal(Animal);

	void info(); // equivalent to the toString method in java to print all the info of a zoo object

};