#include "figure.h"
#include <iostream>

int figure::nbfigures = 0;

figure::figure() {

    //printf("Je suis une figure \n");
    nbfigures++;

}

void figure::afficheNb() {

    printf("Nombre Figures: %d", this->nbfigures);
    printf("\n");

}