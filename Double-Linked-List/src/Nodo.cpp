#include "Nodo.h"

Nodo::Nodo(Alumno dato,Nodo *sig){
    this->dato=dato;
    this->sig=sig;
    this->ant=ant;
}

Nodo::Nodo(){
    dato.name=" ";
    dato.edad=0;
    sig=nullptr;
    ant=nullptr;
}

