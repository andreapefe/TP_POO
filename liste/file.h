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
            dernier = &nouvelle;
            nbElement++;

        } else {
            dernier->next = &nouvelle;
            dernier = &nouvelle;
            nbElement++;
        }
    };

    //FIFO
    void supprimer(int nb){
        if (nb > nbElement){
            std::cout << "ELEMENT NON EXISTANT" << std::endl;
        }

        else {
            if (nbElement == 0){
                std::cout << "FILE VIDE" << std::endl;
            } else if (nbElement == 1) {
                cellule<T> * aux = dernier;
                premier = NULL;
                dernier = NULL;
                aux->next = NULL;
                nbElement = 0;
            } else if (nb == 1) {
                cellule<T> * aux = premier;
                premier = premier->next;
                aux->next = NULL;
                nbElement--;
            } else {
                cellule<T> * aux = premier;
                //Supprime element quelconque
                for(int i=2; i<nb; i++){
                    aux = aux->next;
                }
                cellule<T> * aux_elim = aux->next;
                aux->next = aux_elim->next;
                aux_elim->next = NULL;
                nbElement--;
            }
        }

    };

    bool vide(){
        return (nbElement == 0);
    };

    T valeur(){
        return premier->element;
    };

    int nbElements(){
        return nbElement;
    }

};


#endif //TP1_FILE_H
