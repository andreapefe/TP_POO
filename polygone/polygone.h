#ifndef TP1_POLYGONE_H
#define TP1_POLYGONE_H

#include "../figure.h"


class polygone: public figure {
public:
    int nbCotes;

    polygone();
    polygone(int n);

    void afficherCaracteristiques();

};


#endif //TP1_POLYGONE_H
