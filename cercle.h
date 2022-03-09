#ifndef TP1_CERCLE_H
#define TP1_CERCLE_H
#include "figure.h"

class cercle : public figure{
public:
    cercle();

    void setRayon(int r);
    int getRayon();

    int perimetre();
    void afficherCaracteristiques();

private:
    int rayon;
};


#endif //TP1_CERCLE_H
