#include <iostream>
#include "rectangle.h"
#include "carre.h"
#include "TriangleEquilateral.h"
#include "figure.h"

int main() {
    rectangle rect;
    carre c;
    rect.setLargeur(4);
    rect.setLongeur(6);
    std::cout << rect.perimetre() << std::endl;
    rect.afficherCaracteristiques();

    c.setCote(9);
    c.afficherCaracteristiques();
    std::cout << c.perimetre() << std::endl;

    figure * f;
    TriangleEquilateral tri;
    tri.setCote(3);
    f = &tri;
    f->afficherCaracteristiques();

    return 0;
}
