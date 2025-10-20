#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include <iostream>

using namespace std;

class Lista{
    public:
        Lista();
        Lista(Nodo *sigPos,Nodo *antPos);
        Nodo *head;
        Nodo *tail;

        //Operaciones

        //Insertar
        void insertarInicio(Alumno);
        void insertarMedio(Alumno,int);
        void insertarFinal(Alumno);

        //Eliminar
        void eliminarName(string);
        void eliminarEdad(int);
        void eliminarTodo(void);

        //Buscar
        void buscarName(string);
        void buscarEdad(int);

        //Mostrar
        void verFirst(void);
        void verLast(void);
        void mostrarTodo(void);
        void tamanho(void);
        void vacia(void);
        void verAnt(string);
        void verSig(string);

};

#endif // LISTA_H
