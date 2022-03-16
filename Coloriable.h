#ifndef TP1_COLORIABLE_H
#define TP1_COLORIABLE_H

#include <string>

using namespace std;

class Coloriable {
protected :
    string couleur;

public :
    Coloriable(string coul);

    string getCouleur();

    void setCouleur(string coul);

};


#endif //TP1_COLORIABLE_H
