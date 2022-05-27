//
// Created by dalmacychristopher on 27/02/2021.
//

#include "velo.h"
Velo::Velo(unsigned int poids, unsigned int taille)
        : Vehicule(poids) {
    this->roue_avant = new Roue(taille);
    this->roue_arriere = new Roue(taille);
    std::cout << "Vélo créé" << std::endl;
}
Velo::~Velo() {
    delete this->roue_avant;
    delete this->roue_arriere;
    std::cout << "Velo effacé" << std::endl;
}