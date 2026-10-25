//
// Created by osmane on 9/14/26.
//

#include "../inc/Pokemon.h"
#include <iostream>



void Pokemon::sustainDamage(double value){
    if (value >= this->hitPoints){
        this->hitPoints = 0;
        std::cout<< this->name << " : I'm dead !" <<std::endl;
    }else{
        this->hitPoints -= value;
    }
}

//constructeurs
Pokemon::Pokemon(int id, string name, double maxHitPoints, double attack, double defense):
    id(id), name(name), evolution(0), maxHitPoints(maxHitPoints), hitPoints(maxHitPoints), attack(attack), defense(defense)
{}
Pokemon::Pokemon(int id, string name, int evolution, double maxHitPoints, double attack, double defense):
    id(id), name(name), evolution(evolution), maxHitPoints(maxHitPoints), hitPoints(maxHitPoints), attack(attack), defense(defense)
{}

//recopie
Pokemon::Pokemon(const Pokemon& anotherPokemon):
    id(anotherPokemon.id), name(anotherPokemon.name), maxHitPoints(anotherPokemon.maxHitPoints), hitPoints(anotherPokemon.maxHitPoints), attack(anotherPokemon.attack), defense(anotherPokemon.defense)
{}

//destructeur
Pokemon::~Pokemon(){}

void Pokemon::displayInfo() const{
    std::cout<<name<<std::endl;
    std::cout<<"ID :"<<id<<std::endl;
    std::cout<<"HP :"<<hitPoints<<"/"<<maxHitPoints<<std::endl;
    std::cout<<"Attack :"<<attack<<std::endl;
    std::cout<<"Defense :"<<defense<<std::endl;
}
int Pokemon::getID() {
    return this->id;
}
string Pokemon::getName() {
    return this->name;
}
double Pokemon::getHitPoints(){
    return this->hitPoints;
}
double Pokemon::getAttack(){
    return this->attack;
}
double Pokemon::getDefense(){
    return this->defense;
}

void Pokemon::attacks(Pokemon &defendingPokemon){
    double damage = this->attack - defendingPokemon.defense;
    if (damage>0){
        defendingPokemon.sustainDamage(damage);
    }else{
        std::cout<<"Attack missed !"<<std::endl;
    }
}
