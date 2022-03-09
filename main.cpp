#include <iostream>
#include "polygone/rectangle.h"
#include "polygone/carre.h"
#include "polygone/TriangleEquilateral.h"
#include "figure.h"
#include "cercle.h"

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

    cercle ce;
    ce.setRayon(7);
    ce.afficherCaracteristiques();

    return 0;
}
