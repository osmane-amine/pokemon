//
// Created by osmane on 9/14/26.
//
#include "../inc/Pokedex.h"

Pokedex* Pokedex::instance{nullptr};

Pokedex *Pokedex::getInstance() {
    if (instance == nullptr) {
        instance = new Pokedex(POKEDEX_PATH);
    }
    return instance;
}


Pokedex::Pokedex(string fileName):Pokemon_Vector() {

    std::cout << "*** Constructeur du Pokedex ***" << std::endl;

    std::ifstream file(fileName);
    if(!file.is_open()){
        std::cerr<<"File "<<fileName<<" not found "<<std::endl;
        return;
    }

    std::string line;
    std::getline(file, line);
    while (std::getline(file, line)) {
        //    std::cout << line << std::endl;
        std::stringstream inputstringstream(line);
        std::string cell;
        std::vector<std::string> lineData;

        while(std::getline(inputstringstream,cell,',')){
            lineData.push_back(cell);
        }
        int id = std::stoi(lineData.at(0));
        double attackValue = std::stod(lineData.at(6));
        double hitPoint = std::stod(lineData.at(5));
        double defenseValue = std::stod(lineData.at(7));
        int generation = std::stoi(lineData.at(11));

        pokemon_vector.push_back(new Pokemon(id,lineData.at(1),hitPoint,attackValue,
                                             defenseValue));
    }
}


Pokemon& Pokedex::findByID(int id) {
    for (Pokemon* pokemon : pokemon_vector) {
        if (pokemon->getID() == id) {
            return *pokemon;
        }
    }
    throw std::runtime_error(std::to_string(id)+" is out of bounds");
}

Pokemon& Pokedex::findByName(string name) {
    for (Pokemon* pokemon : pokemon_vector) {
        if (pokemon->getName() == name) {
            return *pokemon;
        }
    }
    throw std::runtime_error(name+" does not exist.");
}