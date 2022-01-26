#ifndef LISTADOBLE_H
#define LISTADOBLE_H

#include"NodoLD.h"
#include<iostream>

using namespace std;

class ListaDoble{
    private:

    public:
        NodoLD* siguiente;
        //NodoLD* anterior;
        NodoLD* primero;
        NodoLD* ultimo;

        ListaDoble();
        void insertar(string nombre, int edad);
        void mostrar();
        void eliminar();
        void modificar(string nombre);//solo se modificara el nombre
        //void graficar();

};

#endif // LISTADOBLE_H
