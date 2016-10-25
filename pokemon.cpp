#include "pokemon.h"

// Base class Pokemon methods
Pokemon::Pokemon(int index){}

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

Fire::Fire(){

	hp += 1;
	attack += 2;
	defense -= 2;
	specialAttack += 4;
	specialDefense -= 2;
	speed += 2;

}

Water::Water(){

	hp += 2;
	attack -= 2;
	defense += 2;
	specialAttack -= 1;
	specialDefense += 4;
	speed -= 1;

}

Grass::Grass(){

	hp -= 3;
	attack -= 2;
	defense += 0;
	specialAttack -= 3;
	specialDefense += 0;
	speed -= 2;

}


