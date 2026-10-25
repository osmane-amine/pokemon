//
// Created by osmane on 9/18/26.
//

#ifndef POKEMON_POKEMON_PARTY_H
#define POKEMON_POKEMON_PARTY_H
#include "Pokemon_Vector.h"


class Pokemon_Party:public Pokemon_Vector {
private:
    std::vector<Pokemon*> pokemon_vector;
public:
    Pokemon& findByID(int id) override;
    Pokemon& findByName(string name) override;
    void addPokemon(Pokemon* pokemon);
    void removePokemon(Pokemon* pokemon);
};


#endif //POKEMON_POKEMON_PARTY_H
