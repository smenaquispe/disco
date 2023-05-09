#ifndef DISCO_H
#define DISCO_H

#include"Plato.h"

class Disco {
public: 
    int numPlatos;
    Plato * platos;

    Disco(int numPlatos, int numPistas, int numSectores, int tamanoSector) {
        this->numPlatos = numPlatos;
        platos = new Plato[numPlatos];

        for(int i = 0; i < numPlatos; i++)
            platos[i].setPistas(numPistas, numSectores, tamanoSector);
    }

    ~Disco() {
        delete [] platos;
    }
};

#endif