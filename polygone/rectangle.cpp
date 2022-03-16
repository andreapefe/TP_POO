#include "rectangle.h"
#include <iostream>


rectangle::rectangle(){

    printf("Je suis un rectangle \n");
    nbCotes = 4; //rectangle
    longeur = 0;
    largeur = 0;
}

int rectangle::perimetre() {
    return largeur*2 + longeur*2;
}

void rectangle::setLargeur(int l) {
    longeur = l;
};

void rectangle::setLongeur(int l) {
  largeur = l;
};

int rectangle::getLongueur(){
    return longeur;
};

int rectangle::getLargeur() {
    return largeur;
}

int getLargeur();

void rectangle::afficherCaracteristiques() {
    polygone::afficherCaracteristiques();
    printf("Largeur : %d \n" ,largeur);
    printf("Longeure : %d \n", longeur);
    printf("\n");
}