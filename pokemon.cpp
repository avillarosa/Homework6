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

Fire::Fire(int health , int atk, int def, int sAtk, int sDef, int spd){

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

Water::Water(int health , int atk, int def, int sAtk, int sDef, int spd){

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

Grass::Grass(int health, int atk, int def, int sAtk, int sDef, int spd){

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


