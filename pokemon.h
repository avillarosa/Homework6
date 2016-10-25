#include <iostream>
#include <string>
using namespace std;

#ifndef POKEMON_H_
#define POKEMON_H_

// Scoped enumeration for the element type, FIRE, WATER, GRASS
enum struct Element {FIRE, WATER, GRASS};

// Pokemon class - Base class
class Pokemon{

private:

protected:
	string name;
	int level;
	int hp, hpMax;
	int attack, defense, specialAttack, specialDefense, speed;

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

};

// Fire Type class - Derived class of Pokemon
class Fire: protected Pokemon{

	// Constructor that performs stat changes for Fire
	Fire(int,int,int,int,int,int);

};

// Water Type class - Derived Class of Pokemon
class Water: protected Pokemon{

	// Constructor that performs stat changes for Water
	Water(int,int,int,int,int,int);
};

// Grass Type class - Derived class of Pokemon
class Grass: protected Pokemon{

	// Constructor that performs stat changes for Grass
	Grass(int,int,int,int,int,int);
};

#endif /* POKEMON_H_ */
