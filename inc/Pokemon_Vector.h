//
// Created by osmane on 9/14/26.
//

#ifndef POKEMON_POKEMON_VECTOR_H
#define POKEMON_POKEMON_VECTOR_H
#include <vector>
#include "Pokemon.h"

class Pokemon_Vector {
private:
    std::vector<Pokemon*> pokemon_vector;
public:
    virtual int findByID(int id) = 0; // renvoie l'index du pokemon dans le vecteur
    virtual int findByName(string name) = 0; // renvoie l'index du pokemon dans le vecteur
    // Attention -> s'il y a plusieurs pokemon correspondant, on devrait tous les renvoyer
    void displayList();
    void displayListInfo();
};


#endif //POKEMON_POKEMON_VECTOR_H