#include <iostream>
#include <string>
using namespace std;

#ifndef POKEMON_H_
#define POKEMON_H_

// Scoped enumeration for the element type, FIRE, WATER, GRASS
enum struct Element {FIRE, WATER, GRASS};

// Pokemon class - Base class
class Pokemon{

protected:
	string name;
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
class Fire: protected Pokemon{

public:
	// Constructor that performs stat changes for Fire
	Fire();

};

// Water Type class - Derived Class of Pokemon
class Water: protected Pokemon{

public:
	// Constructor that performs stat changes for Water
	Water();
};

// Grass Type class - Derived class of Pokemon
class Grass: protected Pokemon{

public:
	// Constructor that performs stat changes for Grass
	Grass();
};

#endif /* POKEMON_H_ */
