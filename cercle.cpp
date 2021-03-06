#include "cercle.h"
#include <iostream>
#include "figure.h"
#define PI 3,1416

cercle::cercle(string couleur) : Coloriable(couleur) {
   // printf("Je suis un cercle \n");
    printf("Couleur : %s \n", couleur.c_str());
}

void cercle::setRayon(int r) {
    rayon = r;
}

int cercle::getRayon() {
    return rayon;
}

int cercle::perimetre() {
    return PI*rayon*2;
}

void cercle::afficherCaracteristiques() {
    printf("Je suis un cercle \n");
    std::cout << "Rayon: " << rayon << std::endl;
    printf("\n");
}

