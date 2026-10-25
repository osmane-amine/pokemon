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
#define POKEDEX_PATH "../media/pokedex.csv"
#include "main.h"


class Pokedex : public Pokemon_Vector {
private:
    static Pokedex* instance;
    std::vector<Pokemon*> pokemon_vector;
protected:
    Pokedex(string fileName);
public:
    static Pokedex *getInstance();
    Pokemon& findByID(int id) override;
    Pokemon& findByName(string name) override;
};


#endif //POKEMON_POKEDEX_H
