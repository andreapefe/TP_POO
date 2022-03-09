#ifndef TP1_RECTANGLE_H
#define TP1_RECTANGLE_H
#include "polygone.h"


class rectangle: public polygone {
private:
    int longeur;
    int largeur;

public:
    rectangle();

    void setLargeur(int l);
    void setLongeur(int l);

    int perimetre();

    void afficherCaracteristiques();

};


#endif //TP1_RECTANGLE_H
