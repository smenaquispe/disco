#ifndef SECTOR_H
#define SECTOR_H

class Sector {
public:
    char * dato;

    Sector() {}

    ~Sector() {
        delete [] dato;
    }

    void setTamanoSector(int tamanoSector) {
        dato = new char[tamanoSector];
    }
};


#endif