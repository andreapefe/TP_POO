#ifndef TP1_CERCLE_H
#define TP1_CERCLE_H
#include "figure.h"
#include "Coloriable.h"


class cercle : public figure, public Coloriable{
public:
    cercle(string couleur);

    void setRayon(int r);
    int getRayon();

    int perimetre();
    void afficherCaracteristiques();

private:
    int rayon;
};


#endif //TP1_CERCLE_H
