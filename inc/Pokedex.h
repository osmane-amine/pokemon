//
// Created by osmane on 9/14/26.
//

#ifndef POKEMON_POKEDEX_H
#define POKEMON_POKEDEX_H

#include <iostream>
#include <fstream>
#include <sstream>

#include "Pokemon.h"
#include "Pokemon_Vector.h"

class Pokedex : public Pokemon_Vector {
private:
    std::vector<Pokemon*> pokemon_vector;
public:
    Pokedex(string fileName);

    int findByID(int id);
    int findByName(string name);
};


#endif //POKEMON_POKEDEX_H
