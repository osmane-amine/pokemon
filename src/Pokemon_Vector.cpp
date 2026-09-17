//
// Created by osmane on 9/14/26.
//

#include "../inc/Pokemon_Vector.h"

#include <filesystem>
#include <bits/ios_base.h>

void Pokemon_Vector::displayList() {
    int i = 0;
    std::cout<<"***** Compact List *****"<<std::endl;
    for (Pokemon* pokemon : this->pokemon_vector) {
        std::cout<<"#"<<i<<" | "<<pokemon->getID()<<" | "<<pokemon->getName()<<std::endl;
        i++;
    }
}

void Pokemon_Vector::displayListInfo() {
    int i = 0;
    std::cout<<"***** Extended List *****"<<std::endl;
    for (Pokemon* pokemon : this->pokemon_vector) {
        std::cout<<"#"<<i<<std::endl;
        pokemon->displayInfo();
        std::cout<<"-----"<<std::endl;
        i++;
    }
}
