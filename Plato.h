#ifndef PLATO_H
#define PLATO_H

#include"Pista.h"

class Plato {
public:
    int numPistas;
    int numSectorePorPista;
    Pista * superficie1;
    Pista * superficie2;  

    Plato() {}

    void setPistas(int numPistas, int numSectores, int tamanoSector) {
        this->numPistas = numPistas;
        superficie1 = new Pista[numPistas];
        superficie2 = new Pista[numPistas];

        for(int i = 0; i < numPistas; i++) {
            superficie1[i].setSectores(numSectores, tamanoSector);
            superficie2[i].setSectores(numSectores, tamanoSector);
        }
    }

    ~Plato() {
        delete [] superficie1;
        delete [] superficie2;
    }
};

#endif