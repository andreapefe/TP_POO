#ifndef TP1_FIGURE_H
#define TP1_FIGURE_H


class figure {
public:



    figure();

    virtual int perimetre()=0;

    virtual void afficherCaracteristiques()=0;

    void afficheNb();

private:

    static int nbfigures;

};



#endif //TP1_FIGURE_H
