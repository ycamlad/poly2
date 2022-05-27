
#include <iostream>
#include "vehicule.h"
#include "velo.h"
    int main() {
        Vehicule *mes_vehicules[10];
        // Création de 10 vélos identiques
        for (int i = 0; i < 10; i++) {
            mes_vehicules[i] = new Velo(25, 700);

        }
//      Destruction des 10 vélos créés.
        for (int i = 0; i < 10; i++) {
            delete mes_vehicules[10];
        }


    }

