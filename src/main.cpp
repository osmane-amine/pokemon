#include "../inc/main.h"


int main(){
    Pokedex *pokedex = Pokedex::getInstance();

    Pokemon bullbizare(pokedex->findByID(1));
    bullbizare.displayInfo();
    Pokemon dracofeu(pokedex->findByID(4));
    dracofeu.displayInfo();


    bullbizare.attacks(dracofeu);
    dracofeu.displayInfo();

    dracofeu.attacks(bullbizare);
    bullbizare.displayInfo();

    pokedex->findByID(1).displayInfo();

    return 0;
}