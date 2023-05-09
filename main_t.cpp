#include<iostream>
using namespace std;

#include"Disco.h"

int main() {

    Disco * disco = new Disco(1,2,3,4);

    char a[] = "a";
    disco->platos[0].superficie1->sectores[0].dato = a;

    cout<<disco->platos[0].superficie1->sectores[0].dato;
    return 0;
}