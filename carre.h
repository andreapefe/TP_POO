#ifndef TP1_CARRE_H
#define TP1_CARRE_H
#include "rectangle.h"

class carre : public rectangle{
private:
    int cote;
public:

    carre();

    void setCote(int l);

    void afficherCaracteristiques();

};


#endif //TP1_CARRE_H
