#include "carre.h"
#include <iostream>

carre::carre(){

    printf("Je suis un carré \n");
    this->setLongeur(getLargeur());

};

void carre::setCote(int l){
    this->setLongeur(l);
    this->setLargeur(l);
};

void carre::afficherCaracteristiques() {
    this->polygone::afficherCaracteristiques();
    printf("Je suis un carré \n");
    printf("Côté : %d \n" ,getLargeur());
    printf("\n");
}


