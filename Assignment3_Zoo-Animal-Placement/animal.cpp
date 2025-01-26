// This is the .cpp file for the Animal class
//This file includes only Implementations of the constructr and functions of the animal class declared in the animal.h file.

#include <iostream>
#include <string>
#include "animal.h" // equivalent to extend in java
using namespace std;


//constructors implementation:-
Animal::Animal(){
	 Type;
	 Climate;
	 eyeNo;
	 footNo;
}
Animal :: Animal(string type, string climate, int numOfEyes, int numOfFeet) {
	Type = type;
	Climate = climate;
	eyeNo = numOfEyes;
	footNo = numOfFeet;
}


// ------> Function/Methods implementations:-
//          I use setters and getters to be able to edit the value of the private parameters

//  **setter and getter for the Type parameter 
void Animal::setType(string myType) {

	Type = myType;
}
string Animal::getType() {
	return Type;
}

//setter and getter for the Climate parameter 
void Animal::setClimate(string myClimate) {

	Climate = myClimate;
}
string Animal::getClimate() {
	return Climate;
}

//setter and getter for the eyeNo parameter 
void Animal::setEyeNo(int num) {
	eyeNo = num;
}
int Animal::getEyeNo() {
	return eyeNo;
}

//setter and getter for the footNo parameter 
void Animal::setFootNo(int num) {
	footNo = num;
}
int Animal::getFootNo() {
	return footNo;
}

//  **info method to print the information of an animal
void Animal::info() {
	cout << "My Animal is a(n) " << Type << ". It lives in a(n) " << Climate << " climate. It has " << eyeNo << " eye(s) and  " << footNo << " feet." << endl;
}