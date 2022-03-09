#include <iostream>
#include "figure.h"
#include "polygone.h"
#include "rectangle.h"


int main() {
    rectangle rect;
    rect.setLargeur(4);
    rect.setLongeur(6);
    std::cout << rect.perimetre() << std::endl;
    rect.afficherCaracteristiques();

    return 0;
}
