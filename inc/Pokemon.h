//
// Created by osmane on 9/14/26.
//

#ifndef POKEMON_POKEMON_H
#define POKEMON_POKEMON_H

#include <iostream>
#include <string>

using std::string;

class Pokemon {
private:
    int id;
    string name;
    int evolution;
    double maxHitPoints;
    double hitPoints;
    double attack;
    double defense;

    void sustainDamage(double value);
public:
    //constructeurs
    Pokemon() = delete;
    Pokemon(int id, string name, double maxHitPoints, double attack, double defense);
    Pokemon(int id, string name, int evolution, double maxHitPoints, double attack, double defense);

    //recopie
    Pokemon(const Pokemon& anotherPokemon);

    //destructeur
    ~Pokemon();

    void displayInfo() const;
    int getID();
    string getName();
    double getHitPoints();
    double getAttack();
    double getDefense();

    void attacks(Pokemon &defendingPokemon);
};

#endif //POKEMON_POKEMON_H