#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include"NodoLS.h"
#include <iostream>

using namespace std;

class ListaSimple{
    private:

    public:
        NodoLS* siguiente;
        NodoLS* primero;
        NodoLS* ultimo;

        ListaSimple();
        void insertar(string nombre, int edad);
        void mostrar();
        void eliminar();
        void modificar();
        //void graficar();
};

#endif // LISTASIMPLE_H
