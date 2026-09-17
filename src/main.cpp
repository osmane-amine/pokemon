#include "../inc/main.h"


int main(){
    Pokemon bullbizare(1,"Bullbizzare",5,10,1);
    bullbizare.displayInfo();

    Pokemon dracofeu(4,"Dracofeu",15,6,15);
    dracofeu.displayInfo();

    bullbizare.attacks(dracofeu);
    dracofeu.displayInfo();

    dracofeu.attacks(bullbizare);
    bullbizare.displayInfo();

    Pokedex pokedex(POKEDEX_PATH);

    return 0;
}