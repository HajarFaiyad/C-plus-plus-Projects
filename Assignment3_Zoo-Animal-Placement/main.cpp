//This file includes the min method that runs the whole program
//this can be considered as the test file(or test cass in java)
 
// --------> In my project i intentionally make that one animal type can exist in only one climate and location, and can have only one type of diet
//  //           animalType: Sea lions, type: carnivores, diet: fish, 2 eyes, 4 flippers/feet, climate: average, id: 10204, location: oceanic
//  //           animalType: gazelle, type: herbivore, diet: grass, 2 eyes, 4 feet, climate: tropical, id 10203, location: grassland
//  //           animalType: bear, type: omnivore, diet: meat (can be grass), 2 eyes, 2 feet, climate: cold, id: 10205, location: mountains

#include <iostream>
#include <string>
#include "zoo.h" //which also includes animal.h

using namespace std;

int main() {
	
	//creating three animal objects in the zoo class
	Animal bear("omnivore", "cold", 2, 2);//here I used the 1st way to define a new animal by using the parametrized constructor
	//bear.info();// while building the program i used this for myself to check
   
    //Becasue in my project I condier that bears can have 2 or 4 feet; I make another object for the bear
    Animal bear2("omnivore", "cold", 2, 4);
    //bear2.info();// for myself to check

    //here I used the 2nd way to define an animal object by using the default constructor
    Animal gazelle;
    gazelle.setType("herbivore");
    gazelle.setClimate("tropical");
    gazelle.setEyeNo(2);
    gazelle.setFootNo(4);
    //gazelle.info(); // for myself to chek

    Animal seaLion("carnivore", "average", 2, 4);
    //seaLion.info(); // for myself to check

    //creating my zoo object
    Zoo myZoo;
    //calling the match my animal function for every animal object to find the suitable placement
    //.info() method is used to print all the information about my animal's correct placement
    myZoo.matchMyAnimal(gazelle);
    myZoo.info();
    myZoo.matchMyAnimal(seaLion);
    myZoo.info();
    myZoo.matchMyAnimal(bear);
    myZoo.info();

    //testing the bear2 objecet 
    myZoo.matchMyAnimal(bear2);
    myZoo.info();

    //we can also use a parametrized constructor of a zoo but it is not the most efficient way; 
    //   becasue the parameters we entered will change anyway according to the placement of the animal.
    //   But I used it once here to to say or prove that this way works too
    /*
    Zoo myZizi(11111, "grass", "grassLand", "gazalle");
    myZizi.matchMyAnimal(bear);
    myZizi.info();
    */
    
    // Now I test animals that I do not have in my zoo to check if the output is correct
    Animal dog("carnivore", "tropical", 2, 4);
    myZoo.matchMyAnimal(dog);
    Animal alien("nothing", "warm", 4, 6);
    myZoo.matchMyAnimal(alien);
 
}