#include "pokemon.h"

// Base class Pokemon methods
Pokemon::Pokemon(int i){}

Pokemon::~Pokemon(){}

string Pokemon::get_name(){
	return name;
}

int Pokemon::get_level(){
	return level;
}

int Pokemon::get_hpMax(){
	return hpMax;
}

int Pokemon::get_hp(){
	return hp;
}

// Fire Type class - Derived class of Pokemon
class Fire: protected Pokemon{

	// Constructor that performs stat changes for Fire
	Fire(int health, int atk, int def, int sAtk, int sDef, int spd){
		hp = health;
		attack = atk;
		defense = def;
		specialAttack = sAtk;
		specialDefense = sDef;
		speed = spd;

		hp += 1;
		attack += 2;
		defense -= 2;
		specialAttack += 4;
		specialDefense -= 2;
		speed += 2;

	}

};

// Water Type class - Derived Class of Pokemon
class Water: protected Pokemon{

	// Constructor that performs stat changes for Water
	Water(int health, int atk, int def, int sAtk, int sDef, int spd){
		hp = health;
		attack = atk;
		defense = def;
		specialAttack = sAtk;
		specialDefense = sDef;
		speed = spd;

		hp += 2;
		attack -= 2;
		defense += 2;
		specialAttack -= 1;
		specialDefense += 4;
		speed -= 1;

	}
};

// Grass Type class - Derived class of Pokemon
class Grass: protected Pokemon{

	// Constructor that performs stat changes for Grass
	Grass(int health , int atk, int def, int sAtk, int sDef, int spd){
		hp = health;
		attack = atk;
		defense = def;
		specialAttack = sAtk;
		specialDefense = sDef;
		speed = spd;

		hp -= 3;
		attack -= 2;
		defense += 0;
		specialAttack -= 3;
		specialDefense += 0;
		speed -= 2;

	}
};

// Scoped enumeration for the element type, FIRE, WATER, GRASS
enum struct Element {FIRE, WATER, GRASS};

