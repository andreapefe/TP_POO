#include <iostream>
#include "polygone/rectangle.h"
#include "polygone/carre.h"
#include "polygone/TriangleEquilateral.h"
#include "figure.h"
#include "cercle.h"
#include "liste/file.h"

int main() {

    file<figure*> f;
    carre * c = new carre;
    c->setCote(5);
    f.inserer(c);
    f.valeur()->afficherCaracteristiques();
    f.supprimer(1);
    //std::cout << f.valeur() << std::endl;
    delete c;
    /*
    figure ** tableau = new figure*[10];

    carre * c = new carre;
    c->setCote(5);
    tableau[0] = c;
    // c->afficherCaracteristiques();
   // tableau-> afficherCaracteristiques();
    tableau[1] = new cercle("bleu");
    tableau[2] = new TriangleEquilateral;

    for(int i = 0; i < 3; i++){
        tableau[i]->afficherCaracteristiques();
    }

    tableau[1]->afficheNb();

    //IL faut penser à eliminer nos tableaux avant la fin du programme pour une bonne gestion de la mémoire.
    for(int i = 0; i < 3; i++){
        delete tableau[i];
    }


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
    ce.afficherCaracteristiques();*/

    return 0;
}
