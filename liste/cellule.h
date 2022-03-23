#ifndef TP1_CELLULE_H
#define TP1_CELLULE_H
#include <iostream>


template <typename T> class cellule {
protected:
    cellule * next;
    T element;

public:

    template <typename Y> friend class file;

    cellule(T ele){
        next = NULL;
        element = ele;
    }

};
#endif //TP1_CELLULE_H
