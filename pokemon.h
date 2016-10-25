#include <iostream>
#include <string>
using namespace std;

#ifndef POKEMON_H_
#define POKEMON_H_

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



#endif /* POKEMON_H_ */
