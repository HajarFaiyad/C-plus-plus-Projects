//This file contains only Implementations of the zoo.h file

#include <iostream>
#include <string>
#include "zoo.h" // includes also the "animal.h" file
using namespace std;

//constructors implementation:-
Zoo::Zoo(){
	id;
	food;
	location;
	animalType;
}

Zoo::Zoo(int id, string food, string location, string animalType) {
	
	(*this).id = id;
	(*this).food = food;
	(*this).location = location;
	(*this).animalType = animalType;

}

//------>Function/Methods implementations:-

// **setter and getter for the id parameter 
void Zoo::setID(int id) {
	this->id = id;
}
int Zoo::getID() {
	return id;
}

void Zoo::setFood(string food) {
	//I use if conditions to limit the food's value to "grass","meat","fish"
	
	this->food = food;
}
string Zoo::getFood() {
	return food;
}

void Zoo::setLocation(string location) {
	//I use if conditions to limit the location's value to "grassland","oceanic","mountain"
	
	this->location = location;
}
string Zoo::getLocation() {
	return location;
}

void Zoo::setAnimalType(string animalType) {
	//I use if conditions to limit the animalType's value to "sea lion", "bear", "gazelle"
	
	this->animalType = animalType;
}
string Zoo::getAnimalType() {
	return animalType;
}

//  ***matchMyAnimal method to place the animals in the suitable placement
// this function will check the parameters of the animal object and find the placement according to that.

// if type= herbivore, climate = tropical, has 2 eyes and 4 feet; then this is a gazalle which lives in grassland and eats grass with id=10203.
// if type= carnivore, climate = average, has 2 eyes and 4 feet; then this is a sea lion, which lives in oceanic and eats fish with id=10204
// if type= omnivore, climate = cold, has 2 eyes and 2(or 4) feets; then this is a bear, which lives in mountains and eats meat with id=10205

void Zoo:: matchMyAnimal(Animal myAnimal){
	//since all animals in my zoo have 2 eyes I start with it
	if(myAnimal.getEyeNo() == 2){
		//since all animals in my zoo have 4 or 2 feet
		if(myAnimal.getFootNo() == 4){
			//since all three animals can have 4 feet; I need to check the climate and the type
			if(myAnimal.getType() == "herbivore" && myAnimal.getClimate() == "tropical"){
				//since the only animal with these specifications is the gazelle
				setLocation("grassLand");
				setID(10203);
				setAnimalType("gazalle");
				setFood("grass");
				setType(myAnimal.getType());
				setClimate(myAnimal.getClimate());
				setEyeNo(myAnimal.getEyeNo());
				setFootNo(myAnimal.getFootNo());
				
			}
			else if(myAnimal.getType() == "carnivore" && myAnimal.getClimate() == "average"){
				//since the only animal with these specifications is the sea lion
				setLocation("oceanic");
				setID(10204);
				setAnimalType("sea lion");
				setFood("fish");
				setType(myAnimal.getType());
				setClimate(myAnimal.getClimate());
				setEyeNo(myAnimal.getEyeNo());
				setFootNo(myAnimal.getFootNo());
			}
			else if(myAnimal.getType() == "omnivore" && myAnimal.getClimate() == "cold"){
				//since the only animal with these specifications is the bear
				setLocation("mountains");
				setID(10205);
				setAnimalType("bear");
				setFood("meat");
				setType(myAnimal.getType());
				setClimate(myAnimal.getClimate());
				setEyeNo(myAnimal.getEyeNo());
				setFootNo(myAnimal.getFootNo());
			}
			else{
				// if the number of eyes is 2  and feet is 4 but it's not a gazalle, sea lion or a bear, then it does not exist
				cout << "No such animal exits" << endl;
			}
		}
		else if(myAnimal.getFootNo() == 2){
			//we need to check the climate and the type too
			if(myAnimal.getType() == "omnivore" && myAnimal.getClimate() == "cold"){
				//since the only animal with these specifications is the bear
				setLocation("mountains");
				setID(10205);
				setAnimalType("bear");
				setFood("meat");
				setType(myAnimal.getType());
				setClimate(myAnimal.getClimate());
				setEyeNo(myAnimal.getEyeNo());
				setFootNo(myAnimal.getFootNo());
			}
			else{
				// if the number of eyes is 2  and feet is 2 but it's not a bear, then it does not exist
				cout << "No such animal exits" << endl;
			}
		}
		else{
			// if the number of feet is not 2 or 4 then it does not exist
			cout << "No such animal exits" << endl;
		}
	}
	else{
		// if the number of eyes is more than 2 then it does not exist
		cout << "No such animal exits" << endl;
	}
	
}

//  **info method to print the information of a Zoo and animal all together 
void Zoo::info() {
	string zooInfo; // this is extra; we can abandon the string variable and just write it's content in the cout directly --> cout<< ... << endl;
	
	// to access the parameters of the animal class i need to use gettters because the parameters are set as private
	zooInfo = "Id: " + to_string(id) + ",  AnimalType: " + animalType + ",  Type: " + getType() + ",  Climate: " + getClimate() + 
		",  Location: " + location +",  Food: " + food + ",  Number of eyes: " + to_string(getEyeNo())  + ",  Number of feet: " + to_string(getFootNo()) ;
	cout<< zooInfo << endl;
	
}