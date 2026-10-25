//
// Created by osmane on 9/18/26.
//

#include "../inc/Pokemon_Party.h"



Pokemon& Pokemon_Party::findByID(int id) {
    for (Pokemon* pokemon : pokemon_vector) {
        if (pokemon->getID() == id) {
            return *pokemon;
        }
    }
    throw std::runtime_error("Pokemon #"+std::to_string(id)+" is not in your Party");
}
Pokemon& Pokemon_Party::findByName(string name) {
    for (Pokemon* pokemon : pokemon_vector) {
        if (pokemon->getName() == name) {
            return *pokemon;
        }
    }
    throw std::runtime_error(name+" is not in your Party");
}

void Pokemon_Party::addPokemon(Pokemon* pokemon) {
    pokemon_vector.push_back(pokemon);
}
void Pokemon_Party::removePokemon(Pokemon* pokemon) {
    std::cout<<"Are you sure you want to let go of "+pokemon->getName()+" ? You won't see them again... (y/n)"<<std::endl;
}