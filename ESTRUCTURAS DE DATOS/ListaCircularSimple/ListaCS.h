#ifndef LISTACS_H
#define LISTACS_H

#include"NodoLCS.h"
#include<iostream>

using namespace std;

class ListaCS{
    private:

    public:
        NodoLCS* siguiente;
        NodoLCS* primero;
        NodoLCS* ultimo;

        ListaCS();
        void insertar(string nombre, int edad);
        void mostrar();
        void eliminar();
        void modificar(string nombre);
        //void graficar();

};

#endif // LISTACS_H
