#include "polygone.h"
#include <iostream>

//Constructeur
polygone::polygone() {
    printf("Je suis un polygone \n");
};

polygone::polygone(int n):nbCotes(n){};

void polygone::afficherCaracteristiques(){
//    printf("Je suis un polygone \n");
//    std::cout << "Nombre de Coteś: " << nbCotes << std::endl;
};