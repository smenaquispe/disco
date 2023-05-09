#ifndef PISTA_H
#define PISTA_H

#include"Sector.h"

class Pista {
public:
    int numSectores;
    Sector * sectores;

    Pista() {}
    ~Pista() {
        delete [] sectores;
    }

    void setSectores(int numSectores, int tamanoSector) {
        this->numSectores = numSectores;
        sectores = new Sector[numSectores];

        for(int i = 0; i < tamanoSector; i++)
            sectores[i].setTamanoSector(tamanoSector);
    }
};

#endif