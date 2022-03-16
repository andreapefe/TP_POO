#include "TriangleEquilateral.h"
#include <iostream>

TriangleEquilateral::TriangleEquilateral() {
    printf("Je suis un triangle \n");
    nbCotes = 3;
}

int TriangleEquilateral::getCote() {
    return cote;
}

void TriangleEquilateral::setCote(int c) {
    cote = c;
}

int TriangleEquilateral::perimetre() {
    return 3*cote;
}

void TriangleEquilateral::afficherCaracteristiques() {
    polygone::afficherCaracteristiques();
    printf("Je suis un triangle \n");
    printf("Côté : %d \n" ,cote);
    printf("\n");
}
