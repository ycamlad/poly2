//
// Created by dalmacychristopher on 27/02/2021.
//

#ifndef POLY2_VELO_H
#define POLY2_VELO_H


#include <iostream>
#include "vehicule.h"
#include "roue.h"
class Velo : public Vehicule {
private:
    Roue* roue_avant;
    Roue* roue_arriere;
public:
    Velo(unsigned int poids, unsigned int taille);
    ~Velo();
};
#endif //POLY2_VELO_H
