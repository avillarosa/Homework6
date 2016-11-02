/*************************
Adam Villarosa           *
Homework 6               *
11-06-2016               *
CPSC - 121               *
**************************/
#ifndef POKEMON_H_
#define POKEMON_H_

#include <iostream>
#include <string>
using namespace std;

// Scoped enumeration for the element type, FIRE, WATER, GRASS
enum struct Element {FIRE, WATER, GRASS};

// Pokemon class - Base class
class Pokemon{

protected:
	string name;
	int index;
	int level = 1;
	int hp = 20, hpMax;
	int attack = 10, defense = 10, specialAttack = 10, specialDefense = 10, speed = 10;

public:
	// Constructor
	Pokemon(int);
	// Destructor
	~Pokemon();

	// Getters
	string get_name();
	int get_level();
	int get_hpMax();
	int get_hp();

	// Factory friend function
	friend Pokemon *make_pokemon(Element, string);

};

// Fire Type class - Derived class of Pokemon
class Fire: public Pokemon{
public:
	// Performs stat changes for Fire
	Fire(int);

};

// Water Type class - Derived Class of Pokemon
class Water: public Pokemon{
public:
	// Performs stat changes for Water
	Water(int);
};

// Grass Type class - Derived class of Pokemon
class Grass: public Pokemon{
public:
	// Performs stat changes for Grass
	Grass(int);
};

// factory function
Pokemon *make_pokemon(Element ele, string na){

	Pokemon *pokePtr = new Pokemon(0);

	if (ele == Element::FIRE){
	
		Fire *firePtr = static_cast<Fire *>(pokePtr);	
		return firePtr;
		
	}
	
	else if (ele == Element::WATER){

		Water *waterPtr = static_cast<Water *>(pokePtr);		
		return waterPtr;

	}

	else{
		
		Grass *grassPtr = static_cast<Grass *>(pokePtr);
		return grassPtr;

	}

}

#endif /* POKEMON_H_ */
