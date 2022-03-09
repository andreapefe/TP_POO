#ifndef TP1_POLYGONE_H
#define TP1_POLYGONE_H

#include "figure.h"


class polygone: figure {
public:
    int nbCotes;

    polygone(int n);

    void afficherCaracteristiques();

};


#endif //TP1_POLYGONE_H
