#ifndef NODO_H
#define NODO_H
#include "Alumno.h"


class Nodo{
    public:
        Nodo(Alumno dato,Nodo*);
        Nodo();

        Alumno dato;
        Nodo *sig;
        Nodo *ant;
};

#endif // NODO_H
