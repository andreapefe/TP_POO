#ifndef TP1_FILE_H
#define TP1_FILE_H
#include "cellule.h"
#include <iostream>



template <typename T> class file {
private:

    cellule<T> * premier;
    cellule<T> * dernier;
    int nbElement;

public:

    //friend class cellule;

    file(){
        premier = NULL;
        dernier = NULL;
        nbElement = 0;
    };

    void inserer(T nouveau){
        //On crée une nouvelle cellule avec element nouveau de type T
        cellule<T> nouvelle(nouveau);
        //Selon le cas on fait pointer le premier et dernier element
        if (nbElement == 0){
            premier = &nouvelle;
            nbElement++;
            dernier = &nouvelle;
        } else {
            dernier->next = &nouvelle;
            dernier = &nouvelle;
            nbElement++;
        }
    };

    void supprimer(int nb){
        if (nbElement == 0){

        } else if (nbElement == 1) {
            cellule<T> * aux = dernier;
            premier = NULL;
            dernier = NULL;
            delete aux;
            nbElement = 0;
        } else {
            cellule<T> * aux = premier;
            premier = premier->next;
            aux->next = NULL;
            delete aux;

            dernier = NULL;
            nbElement = 0;
        }
    };

    bool vide();

    T valeur(){
        return premier->element;
    };

    int nbElements();

};


#endif //TP1_FILE_H
