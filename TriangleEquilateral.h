#ifndef TP1_TRIANGLEEQUILATERAL_H
#define TP1_TRIANGLEEQUILATERAL_H
#include "polygone.h"
#include "figure.h"

class TriangleEquilateral : public polygone{
private:
    int cote;

public:

    TriangleEquilateral();

    void setCote(int c);
    int getCote();

    int perimetre();
    void afficherCaracteristiques();

};


#endif //TP1_TRIANGLEEQUILATERAL_H
