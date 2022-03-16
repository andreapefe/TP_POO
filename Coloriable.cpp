//
// Created by andrea on 16/3/22.
//

#include "Coloriable.h"

Coloriable::Coloriable(string coul){
    couleur=coul;
}

string Coloriable::getCouleur() {
    return couleur;
}

void Coloriable::setCouleur(string coul){
    couleur=coul;
}